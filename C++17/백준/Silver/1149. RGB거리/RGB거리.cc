#include <iostream>
#include <algorithm> // for std::min
using namespace std;

int RGB_bill[1001][3];
int RGB_check[2][3]; // 메모리 최적화를 위해 2행만 사용

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int N;
    cin >> N;

    for (int i = 0; i < N; i++) {
        cin >> RGB_bill[i][0] >> RGB_bill[i][1] >> RGB_bill[i][2];
    }

    // 초기값 설정
    RGB_check[0][0] = RGB_bill[0][0];
    RGB_check[0][1] = RGB_bill[0][1];
    RGB_check[0][2] = RGB_bill[0][2];

    for (int i = 1; i < N; i++) {
        RGB_check[1][0] = RGB_bill[i][0] + min(RGB_check[0][1], RGB_check[0][2]);
        RGB_check[1][1] = RGB_bill[i][1] + min(RGB_check[0][0], RGB_check[0][2]);
        RGB_check[1][2] = RGB_bill[i][2] + min(RGB_check[0][0], RGB_check[0][1]);

        // 이전 행 데이터를 현재 행 데이터로 복사
        RGB_check[0][0] = RGB_check[1][0];
        RGB_check[0][1] = RGB_check[1][1];
        RGB_check[0][2] = RGB_check[1][2];
    }

    // 최솟값 계산
    int result = min({RGB_check[0][0], RGB_check[0][1], RGB_check[0][2]});
    cout << result;

    return 0;
}
