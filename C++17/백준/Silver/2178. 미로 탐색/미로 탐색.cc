#include <iostream>
#include <vector>
#include <queue>
using namespace std;

queue<pair<int, int>> q;
int miro[101][101] = { 0 };
int check[101][101] = { 0 };
int N, M;
int dx[4] = { -1,1,0,0 };
int dy[4] = { 0,0,-1,1 };
int result = 0;

void dfs(int x, int y) {
	check[x][y] = 1; // 방문 표시
	q.push(make_pair(x, y));
	while (!q.empty()) {
		x = q.front().first;
		y = q.front().second;
		q.pop();

		for (int i = 0; i < 4; i++) {
			int nx = x + dx[i];
			int ny = y + dy[i];
			if (nx > 0 && nx <= N && ny > 0 && ny <= M) {      // 범위 체크
				if (miro[nx][ny] != 0 && check[nx][ny] == 0) { // 벽이 아니거나 방문안한 곳
					check[nx][ny] = check[x][y] + 1;           // 재귀 호출
					q.push(make_pair(nx, ny));
				}
			}
		}
	}
}

int main() {
	scanf("%d %d", &N, &M);

	for (int i = 1; i <= N; i++) {
		string str;
		cin >> str;
		for (int j = 0; j < M; j++) {
			miro[i][j+1] = str[j] - '0'; // 문자열을 정수로 변환
		}
	}
	
	dfs(1, 1);

	cout << check[N][M] << "\n";

	return 0;
}