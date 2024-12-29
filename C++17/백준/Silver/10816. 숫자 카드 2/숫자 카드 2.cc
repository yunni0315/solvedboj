#include <iostream>
#include <vector>
#include <algorithm>
#include <map>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int N, M;
	vector<int> Mv;
	map<int, int> result;

	cin >> N;
	while (N--) {
		int i;
		cin >> i;
		result[i]++;
	}

	cin >> M;
	while (M--) {
		int i;
		cin >> i;
		Mv.push_back(i);
	}

	for (int start = 0; start < Mv.size(); start++) {
		cout << result[Mv[start]] << " ";
	}

	return 0;
}