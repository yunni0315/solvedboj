#include <iostream>
using namespace std;

long long int pac(long long int x) {
	if (x == 0)
		return 1;
	else
		return x * pac(x - 1);
}

int main() {
	int x;
	cin >> x;
	cout << pac(x);
	return 0;
}