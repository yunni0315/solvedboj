#include <iostream>
using namespace std;

int ar[129][129];
int W = 0, B = 0;

void func(int x, int y, int size) {
    int flag = ar[x][y];

    // 현재 영역의 모든 값이 동일한지 확인
    for (int i = x; i < x + size; i++) {
        for (int j = y; j < y + size; j++) {
            if (ar[i][j] != flag) {
                flag = 2;  // 다른 값이 있으면 2로 설정하고 분할
                break;
            }
        }
        if (flag == 2) break;
    }

    // 값이 모두 0이면 W(흰색) 증가
    if (flag == 0) W++;
    // 값이 모두 1이면 B(검은색) 증가
    else if (flag == 1) B++;
    // 값이 섞여있으면 4분할
    else {
        int newSize = size / 2;
        func(x, y, newSize);                // 왼쪽 위
        func(x, y + newSize, newSize);       // 오른쪽 위
        func(x + newSize, y, newSize);       // 왼쪽 아래
        func(x + newSize, y + newSize, newSize); // 오른쪽 아래
    }
}

int main() {
    int N;
    scanf("%d", &N);

    // 배열 입력
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            scanf("%d", &ar[i][j]);
        }
    }

    // (0,0)부터 N 크기만큼의 영역을 검사
    func(0, 0, N);

    // 결과 출력 (줄바꿈 추가)
    printf("%d\n%d\n", W, B);

    return 0;
}
