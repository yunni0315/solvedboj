#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
using namespace std;

const int MAX = 1001;
int graph[MAX][MAX] = {0};

void DFS(int V, int N, vector<bool>& visited) {
    cout << V << ' ';
    visited[V] = true;
    for (int i = 1; i <= N; i++) {
        if (graph[V][i] && !visited[i]) {
            DFS(i, N, visited);
        }
    }
}

void BFS(int V, int N) {
    vector<bool> visited(N + 1, false);
    queue<int> q;
    q.push(V);
    visited[V] = true;

    while (!q.empty()) {
        int curr = q.front();
        q.pop();
        cout << curr << ' ';

        for (int i = 1; i <= N; i++) {
            if (graph[curr][i] && !visited[i]) {
                q.push(i);
                visited[i] = true;
            }
        }
    }
}

int main() {
    int N, M, V;
    cin >> N >> M >> V;

    for (int i = 0; i < M; i++) {
        int x, y;
        cin >> x >> y;
        graph[x][y] = 1;
        graph[y][x] = 1;
    }

    vector<bool> visited(N + 1, false);
    DFS(V, N, visited);
    cout << '\n';
    BFS(V, N);

    return 0;
}
