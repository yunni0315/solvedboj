#include <iostream>
using namespace std;
int memo[10000];
int fibo(int x) {
	if (x == 0)
		return 0;
	else if (x == 1 || x == 2)
		return 1;
	else {
		if (memo[x] != 0)
			return memo[x];
		else {
			memo[x] = fibo(x - 1) + fibo(x - 2);
			return memo[x];
		}
	}
}

int main() {
	int a;
	cin >> a;
	cout << fibo(a);
	return 0;
}