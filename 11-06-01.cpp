#include <string>
#include <vector>
#include <queue>
using namespace std;

bool compare(pair<int, int> a, pair<int, int> b) {
    return a.second < b.second;
}

int solution(vector<int> food_times, long long k) {
    int answer = 0;

    long long summary = 0;
    for (int i = 0; i < food_times.size(); i++) {
        summary += food_times[i];
    }
    if (summary <= k) return -1;

    //시간이 작은 음식부터 뺌
    priority_queue<pair<int, int> > pq;
    for (int i = 0; i < food_times.size(); i++) {
        pq.push({ -food_times[i], i + 1 }); //음수로 변환해서 넣으면 가장 작은값이 Top에 있음
    }

    summary = 0;
    long long previous = 0;
    long long length = food_times.size();

    // summary + (현재의 음식 시간 - 이전 음식 시간) * 현재 음식 개수와 k 비교
    while (summary + ((-pq.top().first - previous) * length) <= k) {
        int now = -pq.top().first;
        pq.pop();
        summary += (now - previous) * length;
        length -= 1; // 다 먹은 음식 제외
        previous = now; // 이전 음식 시간 재설정
    }

    // 남은 음식 중에서 몇 번째 음식인지 확인하여 출력
    vector<pair<int, int> > result;
    while (!pq.empty()) {
        int food_time = -pq.top().first;
        int num = pq.top().second;
        pq.pop();
        result.push_back({ food_time, num });
    }
    sort(result.begin(), result.end(), compare); // 음식의 번호 기준으로 정렬
    return result[(k - summary) % length].second;

    return answer;
}