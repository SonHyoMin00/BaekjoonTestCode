#include <iostream>
#include <vector>
using namespace std;

int n, m;
vector<int> arr;

int main(void) {
	cin >> n >> m;
	for (int i = 0; i < n; i++) {
		int x;
		cin >> x;
		arr.push_back(x);
	}

	int start = 0;
	int end = 1e9;

	int result = 0;
	while (start <= end) {
		long long int total = 0;
		int mid = (start + end) / 2;
		
		for (int i = 0; i < n; i++) {
			if (arr[i] > mid) total = total + arr[i] - mid; //잘랐을 때 떡의 양
		}
		if (total < m) {
			end = mid - 1; 
		}
		else {
			result = mid; //최대한 덜 잘랐을 때 결과 저장
			start = mid + 1; //mid는 처리했기때문에 mid+1부터 봄
		}
	}
	cout << result << "\n";


}


