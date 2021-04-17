/*
 *2520 is the smallest number that can be divided by each of the numbers from 1 to 10 without any remainder.
 *What is the smallest positive number that is evenly divisible by all of the numbers from 1 to 20?
 * */
#include <bits/stdc++.h>
using namespace std;

long lcm_range(int n) {
    long res = 1;
    for(long i = 2; i <= n; i++) {
	res = (res*i)/__gcd(res,i);
    }
    return res;
}

long opt_product(int n) {
    int p[n], size = 1;
    p[0] = 2;
    //Prime number smaller than equal to number
    for(int i = 3; i <= n; i++) {
	bool flag = true;
	for(int j = 0; j < size; j++) {
	    if (i % p[j] == 0) {
		flag = false;
		break;
	    }
	}
	if (flag)
	    p[size++] = i;
    }
    long res = 1;
    //Finding power of prime number and multiplying them
    for(int i = 0; i < size; i++) {
	int px = int(log(n)/log(p[i]));
	printf("Val : %d, %d : ->  %d\n", n, p[i], px);
	res *= pow(p[i], px);
    }
    return res;
}

int main() {
    cout << opt_product(20) << endl;
    return 0;
}
