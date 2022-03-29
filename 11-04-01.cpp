#include<iostream>
#include <vector>
using namespace std;

int n;
vector<int> coin;
int main(void) {
	cin >> n;
	for (int i = 0; i < n; i++) {
		int x;
		cin >> x;
		coin.push_back(x);
	}

	int result = 0;
	while (result <= 1000000) {
		result += 1;

		int x = result;
		for (int i = 0; i < coin.size(); i++) {
			if (x >= coin[i]) x -= coin[i];
			if (x <= 0) break;
		}
		if (x > 0) break;
	}

	cout << result << '\n';
}