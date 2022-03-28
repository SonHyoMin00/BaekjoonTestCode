#include <iostream>
using namespace std;

string s;

int main(void) {
	cin >> s;

    long long result = s[0] - '0'; //문자를 숫자로

    for (int i = 1; i < s.size(); i++) {
        int num = s[i] - '0';
        if (num <= 1 || result <= 1) {
            result += num;
        }
        else {
            result *= num;
        }
    }

    cout << result << '\n';
}
