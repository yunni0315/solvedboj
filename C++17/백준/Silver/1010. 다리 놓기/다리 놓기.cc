#include <iostream>
#include <algorithm>>

using namespace std;

long long sum_facto(int N, int M) {
	if (N > M - N) {
		N = M - N;
	}

	long long result = 1;

	for (int i = 0; i < N; ++i) {
		result *= (M - i);
		result /= (i + 1);
	}
	return result;
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int T, N, M;

	cin >> T;
	
	for (int i = 0; i < T; i++) {
		cin >> N; cin >> M;
		cout << sum_facto(N, M) << "\n";
	}

	return 0;
}