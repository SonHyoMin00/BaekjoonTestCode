#include <iostream>
using namespace std;

string s;

int main(void) {
	cin >> s;

	int group0 = 0;
	int group1 = 0;

	if (s[0] == '0') group0++;
	else group1++;

	for (int i = 0; i < s.size()-1; i++) {
		if (s[i] != s[i + 1]) {
			if (s[i + 1] == '0') group0++;
			else group1++;
		}
	}

	cout << min(group0, group1) << '\n';
}

