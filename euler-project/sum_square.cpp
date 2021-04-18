#include <bits/stdc++.h>
using namespace std;

int main() {
    long n = 100;
    long sum = n * (n+1) / 2;
    long ssq = n * (n+1) * (2*n+1) / 6;
    sum = sum * sum;
    cout << ssq - sum << endl;
    return 0;
}
