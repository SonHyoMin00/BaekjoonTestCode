#include <iostream>
#include <vector>
#include <algorithm>
#include <set>
using namespace std;

//1. 이진 탐색
int binarySearch(vector<int>& arr, int target, int start, int end) {
    while (start <= end) {
        int mid = (start + end) / 2;
        if (target == arr[mid]) return mid;
        else if (arr[mid] > target) end = mid - 1;
        else start = mid + 1;
    }
    return -1;
}

int n, m;
vector<int> arr;
vector<int> target;

int main(void) {
    cin >> n;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        arr.push_back(x);
    }
    sort(arr.begin(), arr.end());

    cin >> m;
    for (int i = 0; i < m; i++) {
        int x;
        cin >> x;
        target.push_back(x);
    }
    for (int i = 0; i < m; i++) {
        int result = binarySearch(arr, target[i], 0, n - 1);
        if (result != -1) {
            cout << "yes ";
        }
        else {
            cout << "no ";
        }
    }
}

//2. 계수 정렬
//int n, m;
//int arr[1000001];
//vector<int> target;
//
//int main(void) {
//    cin >> n;
//    for (int i = 0; i < n; i++) {
//        int x;
//        cin >> x;
//        arr[x] = 1;
//    }
//    cin >> m;
//    for (int i = 0; i < m; i++) {
//        int x;
//        cin >> x;
//        target.push_back(x);
//    }
//    for (int i = 0; i < m; i++) {
//        if (arr[target[i]] == 1) {
//            cout << "yes ";
//        }
//        else {
//            cout << "no ";
//        }
//    }
//}


//3.set
//int n, m;
//set<int> s;
//vector<int> target;
//
//int main(void) {
//    cin >> n;
//    for (int i = 0; i < n; i++) {
//        int x;
//        cin >> x;
//        s.insert(x);
//    }
//    cin >> m;
//    for (int i = 0; i < m; i++) {
//        int x;
//        cin >> x;
//        target.push_back(x);
//    }
//    
//    for (int i = 0; i < m; i++) {
//        if (s.find(target[i]) != s.end()) {
//            cout << "yes" << ' ';
//        }
//        else {
//            cout << "no" << ' ';
//        }
//    }
//}






