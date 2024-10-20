#include <iostream>
using namespace std;

int num[1024][1024];

int main() {
	int n, m;

	scanf("%d %d", &n, &m);

	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= n; j++) {
			scanf("%d", &num[i][j]);
			num[i][j] += num[i][j - 1];
		}
		
	}

	for (int k = 0; k < m; k++) {
		int x1, y1, x2, y2; int sum = 0;
		scanf("%d %d %d %d", &x1, &y1, &x2, &y2);
		for (int i = x1; i <= x2; i++) {
			sum += (num[i][y2] - num[i][y1 - 1]);
		}
		printf("%d\n", sum);
	}


	return 0;
}