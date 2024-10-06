#include <stdio.h>
using namespace std;
int memo[1000];

int main() {
	int n;
	scanf("%d", &n);
	memo[1] = 1;
	memo[2] = 3;
	for (int i = 3; i <= 1000; i++) {
		memo[i] = (memo[i - 1] + memo[i - 2] * 2) % 10007;
	}

	printf("%d", memo[n]);

	return 0;
}