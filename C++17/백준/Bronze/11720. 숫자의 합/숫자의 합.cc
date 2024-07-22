#include <iostream>
using namespace std;
int main() {
	int num, sum = 0;
	string nums;

	cin >> num;
	cin >> nums;

	for (int i = 0; i < num; i++) {
		sum += nums[i] - '0';
	}

	cout << sum;

	return 0;
}