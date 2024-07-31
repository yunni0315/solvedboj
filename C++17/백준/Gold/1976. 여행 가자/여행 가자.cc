#include <iostream>
using namespace std;

int parent[201];
int plan[1001];

int find(int x) {
    if (parent[x] == x) return x;
    return parent[x] = find(parent[x]);
}

void unite(int a, int b) {
    a = find(a);
    b = find(b);
    if (a < b) parent[b] = a;
    else parent[a] = b;
}

int main() {
    int N, M;
    cin >> N >> M;

    // 부모 배열 초기화
    for (int i = 1; i <= N; i++) {
        parent[i] = i;
    }

    // 도시 연결 정보 입력 및 Union 연산
    for (int i = 1; i <= N; i++) {
        for (int j = 1; j <= N; j++) {
            int isConnected;
            cin >> isConnected;
            if (isConnected == 1) {
                unite(i, j);
            }
        }
    }

    // 여행 계획 입력
    for (int i = 0; i < M; i++) {
        cin >> plan[i];
    }

    // 첫 번째 도시의 부모를 기준으로 모든 도시가 같은 부모를 가지는지 확인
    bool possible = true;
    int firstCityParent = find(plan[0]);
    for (int i = 1; i < M; i++) {
        if (find(plan[i]) != firstCityParent) {
            possible = false;
            break;
        }
    }

    if (possible) cout << "YES";
    else cout << "NO";

    return 0;
}
