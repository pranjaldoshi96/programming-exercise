/*
F(n) = F(n-1) + F(n-2)
= F(n-2)+F(n-3)+F(n-2)=2 F(n-2) + F(n-3)
= 2(F(n-3)+F(n-4))+F(n-3))=3 F(n-3) + 2 F(n-4)
= 3 F(n-3) + F(n-4) + F(n-5) + F(n-6)
= 4 F(n-3) + F(n-6)
Series : 34 144 610 2584 10946 46368 196418 832040 3524578
*/
#include <bits/stdc++.h>

using namespace std;

int main() {
	unsigned long long f1 = 2, f2 = 8, f3 = 0;
	unsigned long long sum = 10;
	while(f3 < 4000000) {
		f3 = f1 + 4 * f2;
		if (f3 < 4000000)
			sum += f3;
		f1 = f2;
		f2 = f3;
		cout << f3 << " ";
	}
	cout << "sum" << sum << endl;
	return 0;
}
