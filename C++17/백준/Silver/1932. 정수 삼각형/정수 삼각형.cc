#include <iostream>
#include <algorithm>
using namespace std;

int triangle[501][501] = { 0 };


int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int n;
	cin >> n;
	for (int i = 1; i <= n; i++) {
		for (int j = 0; j < i; j++) {
			cin >> triangle[i][j];
		}
	}

	for (int i = n ; i >= 1; i--) {
		for (int j = 0; j < i; j++) {
			triangle[i-1][j] += max(triangle[i][j], triangle[i][j + 1]);
		}
	}

	cout << triangle[1][0] << "\n";

	return 0;
}