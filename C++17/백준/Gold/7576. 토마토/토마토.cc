#include<iostream>
#include<queue>

using namespace std;

int M, N, num_tomato, maybe_tomato;
int box[2000][2000];
int check[2000][2000];
int answer = 0;

int x[4] = { 1,-1,0,0 };
int y[4] = { 0,0,1,-1 };

int main() {
	void(scanf("%d %d", &M, &N));
	num_tomato = M * N;
	maybe_tomato = 0;
	queue<pair <pair< int, int >, int> > q;
	int day = 0;
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < M; j++) {
			void(scanf("%d", &box[i][j]));
			if (box[i][j] == -1) num_tomato -= 1;
			if (box[i][j] == 1) q.push(make_pair(make_pair(i, j), day));
		}
	}
	int date = 0;
	while (!q.empty()) {
		int q_x = q.front().first.first, q_y = q.front().first.second, new_day = q.front().second;
		
		q.pop();

		if (check[q_x][q_y] == 1) continue;
		check[q_x][q_y] = 1;
		box[q_x][q_y] = 1;
		maybe_tomato++;

		for (int i = 0; i < 4; i++) {
			int new_q_x = q_x + x[i], new_q_y = q_y + y[i];
			if (new_q_x >= N || new_q_x < 0 || new_q_y >= M || new_q_y < 0) continue;
			else if (check[new_q_x][new_q_y] == 1 || box[new_q_x][new_q_y] == -1) continue;
			else if (box[new_q_x][new_q_y] == 0) {
				q.push(make_pair(make_pair(new_q_x, new_q_y), new_day + 1));
			}
		}
		date = new_day;
	}
	if (maybe_tomato != num_tomato)
		cout << -1;
	else
		cout << date;

	return 0;
}