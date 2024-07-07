#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int upper[10001] = { 0 };
	long long int N;
	cin >> N;
	for (long long int i = 0; i < N; i++) {
		int num = 0;
		cin >> num;
		upper[num]++;
	}

	for (int i = 1; i < 10001; i++) {
		for (int j = 1; j <= upper[i]; j++)
			cout << i << "\n";
	}
	
	return 0;
}