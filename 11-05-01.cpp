#include <iostream>
#include <vector>
using namespace std;

int n, m;
vector<int> k;

int main(void) {
	cin >> n >> m;
	for (int i = 0; i < n; i++) {
		int x;
		cin >> x;
		k.push_back(x);
	}

	int count = 0;
	for (int i = 0; i < n; i++) {
		for (int j = i + 1; j < n; j++) {
			if (k[i] != k[j]) count++;
		}
	}

	cout << count << '\n';
}