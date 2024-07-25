#include <iostream>
using namespace std;

int pac(int a) {
	int i = 1;
	while (a != 0) {
		i *= a;
		a--;
	}
	return i;
}

int main() {
	int N, K;
	cin >> N >> K;

	cout << pac(N) / (pac(N - K) * pac(K));

	return 0;
}