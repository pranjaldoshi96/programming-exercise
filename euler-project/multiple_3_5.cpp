/*
 * If we list all the natural numbers below 10 that are multiples of 3 or 5, we get 3, 5, 6 and 9. The sum of these multiples is 23.
Find the sum of all the multiples of 3 or 5 below 1000.
 * */
#include <bits/stdc++.h>
using namespace std;

int main() {
    int ulimit = 1000 - 1;//Number smaller than 1000
    long  d_3 = ulimit/3;
    long  d_5 = ulimit/5;
    long  d_15 = ulimit/15;
    long  sum_3 = (d_3 * (d_3+1))/2 * 3;
    long  sum_5 = (d_5 * (d_5+1))/2 * 5;
    long  sum_15 = (d_15 * (d_15+1))/2 * 15;
    int result = sum_3 + sum_5 - sum_15;
    cout << "result : " << result;
    return 0;
}
