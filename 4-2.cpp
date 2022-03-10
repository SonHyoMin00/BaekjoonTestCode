#include <iostream>
using namespace std;

int n;
int cnt=0;

int main() {
	cin >> n;
	for (int i = 0; i < n+1; i++) {
		for (int j = 0; j < 60; j++) {
			for (int k = 0; k < 60; k++) {
				if (i % 10 == 3 || j % 10 == 3 || j / 10 == 3 || k % 10 == 3 || k / 10 == 3) cnt++;
			}
		}
	}
	cout << cnt;
	return 0;
}