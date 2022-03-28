#include <iostream>
#include <vector>
using namespace std;

//����Ž���� �迭 ������ �����Ͱ� ���ĵǾ� �־�� ��!
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
	if (result == -1) cout << "���Ұ� �������� �ʽ��ϴ�.\n";
	else cout << result+1 << "\n";
}
