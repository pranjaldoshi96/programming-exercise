#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long ull;

unsigned long long prime_factor(unsigned long long num) {
    unsigned long long res = 1;
    for(int i = 2; i <= num; i++) {
	while(num % i == 0) {
	    res = i;
	    num/=i;
	}
    }
    cout << endl;
    return res;
}

ull pf_opt(ull num) {
    ull res = 1;
    for(int i = 2; i*i <= num; i++) {
	while(num % i == 0) {
	    res = i;
	    num/=i;
	}
    }
    if (num != 0)
	return num;
    cout << endl;
    return res;
}
int main() {
    unsigned long long num = 600851475143;
    cout << prime_factor(num) << endl;
    cout << pf_opt(num) << endl;
    return 0;
}
