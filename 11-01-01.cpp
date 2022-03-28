#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int n, result=0; //result는 그룹수
vector<int> travler;

int main(void) {
	cin >> n;
	for (int i = 0; i < n; i++) {
		int x;
		cin >> x;
		travler.push_back(x);
	}

	sort(travler.begin(), travler.end());

	int count = 0; // 현재 그룹에 포함된 모험가의 수
	for (int i = 0; i < n; i++) {
		count += 1;
		if (count >= travler[i]) {
			result += 1;
			count = 0;
		}
	}

	cout << result << '\n'; // 총 그룹의 수 출력

}