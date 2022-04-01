#include <iostream>
#include <vector>
using namespace std;

int n;
vector<int> food;
int d[100];
int main(void) {
	cin >> n;
	for (int i = 0; i < n; i++) {
		int x;
		cin >> x;
		food.push_back(x);
	}

	d[0] = food[0];
	d[1] = max(food[0], food[1]);
	for (int i = 2; i < n; i++) {
		d[i] = max(d[i - 1], d[i - 2] + food[i]);
	}

	cout << d[n - 1] << '\n';
}