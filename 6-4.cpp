#include <iostream>
using namespace std;

int n = 10;
int arr[10] = { 7, 5, 9, 0, 3, 1, 6, 2, 4, 8 };

void quick_sort(int* array, int start, int end) {
	if (start >= end) return;
	int pivot = start;
	int left = start + 1;
	int right = end;

	while (left <= right) {
		while (left <= end && arr[left] <= arr[pivot]) left++; //왼쪽에서 피벗보다 큰 데이터 찾기
		while (right > start && arr[right] >= arr[pivot]) right--; //오른쪽에서 피벗보다 작은 데이터 찾기
		if (left > right) swap(arr[pivot], arr[right]); 
		else swap(arr[left], arr[right]);
	}

	quick_sort(array, start, right - 1);
	quick_sort(array, right + 1, end);

}

int main(void) {
	quick_sort(arr, 0, n - 1);
	for (int i = 0; i < n; i++) {
		cout << arr[i] << ' ';
	}
}