#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	int n, m;
	int result=1;

	cin >> n >> m;
	for (int i = 0; i < n; i++) {
		int min_value = 10001;
		for (int j = 0; j < m; j++) {
			int x;
			cin >> x;
			min_value = min(x, min_value);
		}
		result = max(result, min_value);
	}
	cout << result;
}