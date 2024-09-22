#include<iostream>
int dp[12];
int main() {
	int n,T;

	dp[1] = 1;
	dp[2] = 2;
	dp[3] = 4;
	
	scanf("%d", &T);
	for (int i = 0; i < T; i++) {
		scanf("%d", &n);
		for (int j = 4; j <= n; j++) {
			dp[j] = dp[j - 1] + dp[j - 2] + dp[j - 3];
		}
		printf("%d\n", dp[n]);
	}
	
	return 0;
}