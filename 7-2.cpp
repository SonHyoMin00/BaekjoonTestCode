#include <iostream>
#include <vector>
using namespace std;

//이진탐색은 배열 내부의 데이터가 정렬되어 있어야 함!
int binarySearch(vector<int>& arr, int target, int start, int end) {
	if (start > end) return -1;
	int mid = (start + end) / 2;

	if (arr[mid] == target) return mid;
	else if (arr[mid] < target) return binarySearch(arr, target, mid + 1, end);
	else return binarySearch(arr, target, start, mid - 1);
}

//int binarySearch(vector<int>& arr, int target, int start, int end) {
//	while (start <= end) {
//		int mid = (start + end) / 2;
//		if (arr[mid] == target) return mid;
//		else if (arr[mid] > target) end = mid - 1;
//		else start = mid + 1;
//	}
//	return -1;
//}

int n, target;
vector<int> arr;

int main(void) {
	cin >> n >> target;
	for (int i = 0; i < n; i++) {
		int x;
		cin >> x;
		arr.push_back(x);
	}

	int result = binarySearch(arr, target, 0, n - 1);
	if (result == -1) cout << "원소가 존재하지 않습니다.\n";
	else cout << result+1 << "\n";
}

