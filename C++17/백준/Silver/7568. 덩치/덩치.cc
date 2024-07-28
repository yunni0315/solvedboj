#include <iostream>
#include <vector>
using namespace std;

int main() {
	int n;
	cin >> n;
	vector<pair<int,int>> body(n);
	
	for (int i = 0; i < n; i++) {
		cin >> body[i].first >> body[i].second;
	}
	
	vector<int> ranking(n,1);
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (i != j && body[i].first < body[j].first && body[i].second < body[j].second)
				ranking[i]++;
		}
	}

	for (int i = 0; i < ranking.size(); i++)
		cout << ranking[i] << ' ';

	return 0;
}