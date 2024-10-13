#include <iostream>
#include <string>
#include <algorithm>
using namespace std;


int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int trees[1000001];
	long long int N, M, max = 0;
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

		for (int i = 0; i < N; i++) {
			if (trees[i] > mid) {
				sum += trees[i] - mid;
			}
		}

		if (sum >= M) {
			low = mid + 1;
			max = mid;
		}
		else if (sum < M) {
			high = mid - 1;
		}
	}
	cout << max;

	return 0;
}