#include <iostream>
#include <vector>
#include <queue>
#include <climits> // INT_MAX 사용
using namespace std;

int main() {
    int N, M;
    cin >> N >> M;

    vector<vector<int>> adj(N + 1); // 인접 리스트
    for (int i = 0; i < M; i++) {
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    int result = INT_MAX; // 케빈 베이컨의 최솟값
    int person = -1; // 최솟값을 가진 사람

    for (int start = 1; start <= N; start++) {
        vector<int> dist(N + 1, -1); // 거리 배열
        queue<int> q;

        dist[start] = 0; // 시작점의 거리
        q.push(start);

        while (!q.empty()) {
            int current = q.front();
            q.pop();

            for (int neighbor : adj[current]) {
                if (dist[neighbor] == -1) { // 방문하지 않은 노드
                    dist[neighbor] = dist[current] + 1;
                    q.push(neighbor);
                }
            }
        }

        int totalDistance = 0;
        for (int i = 1; i <= N; i++) {
            totalDistance += dist[i];
        }

        if (totalDistance < result) {
            result = totalDistance;
            person = start;
        }
    }

    cout << person << endl;
    return 0;
}
