/*
 * A palindromic number reads the same both ways. The largest palindrome made from the product of two 2-digit numbers is 9009 = 91 × 99.
 * Find the largest palindrome made from the product of two 3-digit numbers.
 */
#include <bits/stdc++.h>
using namespace std;

bool is_palindrome(long long num) {
    int rev = 0;
    int n = num;
    while(n){
	rev = rev * 10 + n%10;
	n/=10;
    }
    return num == rev;
}
int main() {
    for (int i = 900; i < 1000; i++) {
	for(int j = 900; j < 1000; j++) {
	    if (is_palindrome(i*j))
		cout << i * j << endl;
	}
    }
    cout << is_palindrome(9009) << endl;
    cout << is_palindrome(9909) << endl;
    return 0;
}
