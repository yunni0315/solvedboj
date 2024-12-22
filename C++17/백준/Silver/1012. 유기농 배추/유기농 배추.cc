#include <iostream>
#include <cstring> // memset 사용을 위해 추가

using namespace std;

int F[50][50];       // 문제의 최대 크기 (M, N <= 50)
int check[50][50];   // 방문 여부 저장 배열

int x[4] = { 1, -1, 0, 0 }; // 상하좌우 이동
int y[4] = { 0, 0, 1, -1 };

void dfs(int X, int Y, int M, int N) {
    check[X][Y] = 1;

    for (int i = 0; i < 4; i++) {
        int nx = X + x[i];
        int ny = Y + y[i];

        if (nx >= 0 && nx < M && ny >= 0 && ny < N) {
            if (F[nx][ny] == 1 && !check[nx][ny]) {
                dfs(nx, ny, M, N);
            }
        }
    }
}

int main() {
    int T; // 테스트 케이스 개수
    scanf("%d", &T);

    while (T--) {
        int M, N, bechu_num; // 밭 크기 (M x N) 및 배추 개수
        scanf("%d %d %d", &M, &N, &bechu_num);

        // 배열 초기화
        memset(F, 0, sizeof(F));
        memset(check, 0, sizeof(check));

        // 배추 위치 입력
        for (int i = 0; i < bechu_num; i++) {
            int X, Y;
            scanf("%d %d", &X, &Y);
            F[X][Y] = 1;
        }

        int worm = 0;

        // DFS를 사용하여 연결된 배추 묶음 탐색
        for (int i = 0; i < M; i++) {
            for (int j = 0; j < N; j++) {
                if (F[i][j] == 1 && !check[i][j]) {
                    dfs(i, j, M, N);
                    worm++; // 배추흰지렁이 수 증가
                }
            }
        }

        printf("%d\n", worm);
    }

    return 0;
}
