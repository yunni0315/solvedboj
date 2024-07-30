#include <iostream>
#include <queue>
#include <vector>
using namespace std;

int M, N, H, num_tomato, p_tomato;
int box[200][200][200];
int check[200][200][200];
int main() {
	queue<pair<pair<int, int>, pair<int, int>>> q;
	scanf("%d %d %d", &M, &N, &H);
	num_tomato = M * N * H;
	int day = 0,date = 0;
	for (int z = 0; z < H; z++) {
		for (int y = 0; y < N; y++) {
			for (int x = 0; x < M; x++) {
				scanf("%d", &box[x][y][z]);
				if (box[x][y][z] == -1) num_tomato--;
				if (box[x][y][z] == 1) q.push(make_pair(make_pair(x, y), make_pair(z, day)));
			}
		}
	}

	while (!q.empty()) {
		int X[6] = { 1,-1,0,0,0,0 };
		int Y[6] = { 0,0,1,-1,0,0 };
		int Z[6] = { 0,0,0,0,1,-1 };
		
		int q_x = q.front().first.first;
		int q_y = q.front().first.second;
		int q_z = q.front().second.first;
		int new_day = q.front().second.second;
		q.pop();

		if (check[q_x][q_y][q_z] == 1) continue;
		check[q_x][q_y][q_z] = 1;
		box[q_x][q_y][q_z] = 1;
		p_tomato++;

		for (int i = 0; i < 6; i++) {
			int new_q_x = q_x + X[i];
			int new_q_y = q_y + Y[i];
			int new_q_z = q_z + Z[i];

			if (new_q_x >= M || new_q_y >= N || new_q_z >= H || new_q_x < 0 || new_q_y < 0 || new_q_z < 0) continue;
			else if (check[new_q_x][new_q_y][new_q_z] == 1 || box[new_q_x][new_q_y][new_q_z] == -1) continue;
			else {
				if (box[new_q_x][new_q_y][new_q_z] == 0) {
					q.push(make_pair(make_pair(new_q_x, new_q_y), make_pair(new_q_z, new_day + 1)));
				}
			}
		}
		date = new_day;
	}

	if (num_tomato != p_tomato)
		cout << -1;
	else
		cout << date;

	return 0;
}