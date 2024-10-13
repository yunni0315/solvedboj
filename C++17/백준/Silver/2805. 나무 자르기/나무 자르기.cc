#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int trees[1000001];
    long long int N, M, max_height = 0;
    cin >> N >> M;

    for (int i = 0; i < N; i++) {
        cin >> trees[i];
    }
    sort(trees, trees + N);

    long long low = 0;
    long long high = trees[N - 1];

    while (high >= low) {
        long long mid = (low + high) / 2;
        long long sum = 0;

        // 잘라서 얻은 나무 길이 합 계산
        for (int i = 0; i < N; i++) {
            if (trees[i] > mid) {
                sum += trees[i] - mid;
            }
        }

        // 합이 M 이상이면 톱 높이를 높여본다.
        if (sum >= M) {
            max_height = mid;  // 일단 현재 높이 저장
            low = mid + 1;
        }
        // 합이 M 미만이면 톱 높이를 낮춘다.
        else {
            high = mid - 1;
        }
    }

    cout << max_height;

    return 0;
}
