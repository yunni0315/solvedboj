#include <iostream>
#include <algorithm>
using namespace std;
int memo[1000000];
int MAX = 10000000;

int main() {
	int n, count = 0;
	scanf("%d", &n);
	for (int i = 2; i <= n; i++) {
		int x, y, z;
		if (i % 3 == 0) {
			x = memo[i / 3] + 1;
		}
		else {
			x = MAX;
		}
		if (i % 2 == 0) {
			y = memo[i / 2] + 1;
		}
		else y = MAX;

		z = memo[i - 1] + 1;

		memo[i] = min({ x,y,z });
	}
	printf("%d", memo[n]);
	return 0;
}