#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int n;
vector<int> vec;

bool compare(int a, int b) {
    return a > b;
}

int main() {
    cin >> n;

    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        vec.push_back(x);
    }

    sort(vec.begin(), vec.end(), compare);

    for (int i = 0; i < n; i++) {
        cout << vec[i] << ' ';
    }

    return 0;
}
