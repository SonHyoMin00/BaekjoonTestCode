#include <iostream>
#include <vector>
using namespace std;

int n, m;
int graph[1000][1000];

bool dfs(int x, int y) {
    if (x <= -1 || x >= n || y <= -1 || y >= m) {
        return false;
    }
    if (graph[x][y] == 0) {
        graph[x][y] = 1; //true
        dfs(x, y + 1); //╩С
        dfs(x, y - 1); //го
        dfs(x - 1, y); //аб
        dfs(x + 1, y); //©Л
        return true;
    }
    return false;
}

int main() {
    cin >> n >> m;
    
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            scanf_s("%1d", &graph[i][j]);
        }
    }
    
    int result = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (dfs(i, j)) {
                result += 1;
            }
        }
    }
    cout << result;
}