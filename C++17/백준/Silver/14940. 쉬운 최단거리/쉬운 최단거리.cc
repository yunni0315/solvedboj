#include <iostream>
#include <queue>

using namespace std;

int map[1001][1001];
int result[1001][1001];

queue<pair<int, int>> Q;

void BFS() {
	
	int x[4] = { 1, -1, 0, 0 };
	int y[4] = { 0, 0 ,1, -1 };

	while (!Q.empty()) {

		// 값을 꺼낸다
		int k = Q.front().first;
		int t = Q.front().second;
		Q.pop();

		// 인근 노드의 값을 업데이트한다
		for (int i = 0; i < 4; i++) {
			if (result[k + x[i]][t + y[i]] == -1) {
				result[k + x[i]][t + y[i]] = result[k][t] + 1;
				Q.push(make_pair(k + x[i], t + y[i]));
			}
		}
	}
}

int main() {
	int N, M; 
	int k, t;
	scanf("%d %d", &N, &M);

	for (int i = 0; i < N; i++) {
		for (int j = 0; j < M; j++) {
			scanf("%d", &map[i][j]);
			if (map[i][j] == 1) {
				result[i][j] = -1;
			}
			else if (map[i][j] == 2){
				result[i][j] = 0;
				k = i; t = j;
			}
			else {
				result[i][j] = 0;
			}
		}
	}

	Q.push(make_pair(k, t));
	BFS();

	for (int i = 0; i < N; i++) {
		for (int j = 0; j < M; j++) {
			printf("%d ", result[i][j]);
		}
		printf("\n");
	}

	return 0;
}