#include <bits/stdc++.h>
using namespace std;

string intToRoman(int num) {

    // Defining an array of possibility with corner cases
    vector<string> symbol{"M", "CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX", "V" ,"IV", "I"};
    vector<int> val{1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1};

    string result = "";
    for (int i = 0; i < val.size(); i++) {
	/* Adding symbol if input number is greater than indexed number*/
	while(num >= val[i]) {
	    result += symbol[i];
	    num -= val[i];
	}
    }
    return result;
}

int main() {
    int num;
    cin >> num;
    cout << "Result : " << intToRoman(num);
}
