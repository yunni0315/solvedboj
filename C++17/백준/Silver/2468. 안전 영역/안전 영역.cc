#include <iostream>
#include <queue>
#include <algorithm>

using namespace std;
int space[101][101] = { 0 };
int visited[101][101] = { 0 };
queue<pair<int, int>> q;
int dx[4] = { 1, -1, 0, 0 };
int dy[4] = { 0, 0, 1, -1 };

void dfs(int x, int y, int n, int k) {
	visited[x][y] = 1;

	for (int i = 0; i < 4; i++) {
		int nx = x + dx[i];
		int ny = y + dy[i];

		if (nx >= 0 && nx < n && ny >= 0 && ny < n) {
			if (space[nx][ny] > k && !visited[nx][ny]) {
				dfs(nx, ny, n, k);
			}
		}
	}
}

int main() {
	int max = -1;
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cin >> space[i][j];
			if (max < space[i][j]) {
				max = space[i][j];
			}
		}
	}

	int safezone = 0;
	for (int k = 0; k < max; k++) {
		int cnt = 0;
        fill(&visited[0][0], &visited[0][0] + 101 * 101, 0);

		for (int i = 0; i < n; i++) {
			for (int j = 0; j < n; j++) {
				if (space[i][j] > k && !visited[i][j]) {
					dfs(i, j, n, k);
					cnt++;
				}
			}
		}
		if (cnt > safezone) {
			safezone = cnt;
		}
	}
	cout << safezone << "\n";

	return 0;
}