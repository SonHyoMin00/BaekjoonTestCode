#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int n, m, k;
vector<int> v;

int main() {
    // N, M, K를 공백을 기준으로 구분하여 입력 받기
    cin >> n >> m >> k;

    // N개의 수를 공백을 기준으로 구분하여 입력 받기
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        v.push_back(x);
    }

    sort(v.begin(), v.end()); // 오름차순 정렬
    int first = v[n - 1]; // 가장 큰 수
    int second = v[n - 2]; // 두 번째로 큰 수

    // 가장 큰 수가 더해지는 횟수 계산
    int maxSum = (m / (k + 1)) * k;
    maxSum += m % (k + 1);

    int result = 0;
    result += maxSum * first; // 가장 큰 수 더하기
    result += (m - maxSum) * second; // 두 번째로 큰 수 더하기

    cout << result << '\n'; // 최종 답안 출력
}