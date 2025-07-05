#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>

using namespace std;

int apat[101][101] = { 0 };
int check[101][101] = { 0 };
int dx[4] = { -1, 1, 0, 0 };
int dy[4] = { 0, 0, -1, 1 };
int N;

int dfs(int x, int y) {
	check[x][y] = 1;
	int count = 1; // 현재 단지의 집 개수
	for (int i = 0; i < 4; i++) {
		int nx = x + dx[i];
		int ny = y + dy[i];
		if (nx >= 0 && ny >= 0 && nx < N && ny < N) {
			if (apat[nx][ny] == 1 && check[nx][ny] == 0) {
				count += dfs(nx, ny);
			}
			
		}
	}
	return count; // 현재 단지의 집 개수 반환
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	cin >> N;

	for (int i = 0; i < N; i++) {
		string str;
		cin >> str;
		for (int j = 0; j < str.size(); j++) {
			apat[i][j] = str[j] - '0'; // 문자열을 정수로 변환
		}
	}

	vector<int> danji;
	int sum_danji = 0;

	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			if (apat[i][j] == 1 && check[i][j] == 0) {
				danji.push_back(dfs(i, j));
				sum_danji++;
			}
		}
	}
	
	sort(danji.begin(), danji.end());
	cout << sum_danji << "\n"; // 단지 수 출력
	for (int i = 0; i < danji.size(); i++) {
		cout << danji[i] << "\n"; // 각 단지의 집 개수 출력
	}

	return 0;
}