#include <iostream>
using namespace std;

char RGB[101][101];

char RG_B[101][101];
char Gner[101][101];

int x[4] = { 1, -1, 0, 0 }; 
int y[4] = { 0, 0, 1, -1 };

void dfs_G(int X, int Y, int M, int N, char color) {
	Gner[X][Y] = 'X';

	for (int i = 0; i < 4; i++) {
		int nx = X + x[i];
		int ny = Y + y[i];

		if (nx >= 0 && nx < M && ny >= 0 && ny < N) {
			if (RGB[nx][ny] == color && !Gner[nx][ny]) {
				dfs_G(nx, ny, M, N, color);
			}
		}
	}
}

void dfs_RG_B(int X, int Y, int M, int N, char color) {
	RG_B[X][Y] = 'X';

	for (int i = 0; i < 4; i++) {
		int nx = X + x[i];
		int ny = Y + y[i];

		if (nx >= 0 && nx < M && ny >= 0 && ny < N) {
			if (color == 'B') {
				if (RGB[nx][ny] == color && !RG_B[nx][ny]) {
					dfs_RG_B(nx, ny, M, N, color);
				}
			}

			else {
				if ((RGB[nx][ny] == 'R' || RGB[nx][ny] == 'G') && !RG_B[nx][ny]) {
					dfs_RG_B(nx, ny, M, N, color);
				}
			}
			
		}
	}
}

int main() {
	ios::sync_with_stdio;
	cin.tie(0);
	cout.tie(0);

	int N;
	cin >> N;

	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			cin >> RGB[i][j];
		}
	}

	int sector = 0;
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			if (RGB[i][j] != 'X' && !Gner[i][j]) {
				dfs_G(i, j, N, N, RGB[i][j]);
				sector++;
			}
		}
	}
	cout << sector << " ";
	sector = 0;
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			if (RGB[i][j] != 'X' && !RG_B[i][j]) {
				dfs_RG_B(i, j, N, N, RGB[i][j]);
				sector++;
			}
		}
	}
	cout << sector;
	return 0;
}