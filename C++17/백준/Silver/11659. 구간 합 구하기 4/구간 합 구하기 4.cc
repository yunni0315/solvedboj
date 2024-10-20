#include <iostream>
using namespace std;

int num[1000001];

int main() {
	int n, m;
	
	scanf("%d %d", &n, &m);

	for (int i = 1; i <= n; i++) {
		scanf("%d", &num[i]);
		num[i] += num[i - 1];
	}

	for (int k = 0; k < m; k++) {
		int i, j;int sum = 0;

		scanf("%d %d", &i, &j);
		sum = num[j] - num[i - 1];
		printf("%d\n", sum);
	}


	return 0;
}