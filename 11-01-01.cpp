#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int n, result=0; //result�� �׷��
vector<int> travler;

int main(void) {
	cin >> n;
	for (int i = 0; i < n; i++) {
		int x;
		cin >> x;
		travler.push_back(x);
	}

	sort(travler.begin(), travler.end());

	int count = 0; // ���� �׷쿡 ���Ե� ���谡�� ��
	for (int i = 0; i < n; i++) {
		count += 1;
		if (count >= travler[i]) {
			result += 1;
			count = 0;
		}
	}

	cout << result << '\n'; // �� �׷��� �� ���

}