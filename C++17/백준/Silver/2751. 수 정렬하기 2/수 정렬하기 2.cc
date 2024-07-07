#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	int time;
	vector<int> num;
	cin >> time;
	while (time != 0) {
		int n;
		cin >> n;
		num.push_back(n);
		time--;
	}
	sort(num.begin(), num.end());
	for (int i = 0; i < num.size(); i++) {
		cout << num[i] << "\n";
	}
	return 0;
}