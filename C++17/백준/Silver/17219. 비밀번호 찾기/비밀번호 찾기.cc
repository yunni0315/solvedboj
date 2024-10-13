#include <iostream>
#include <string>
#include <map>
using namespace std;

int main() {
	cin.tie(NULL);
	ios::sync_with_stdio(false);
	int N, M;
	cin >> N >> M;

	map<string, string> adsress_passward;

	for (int i = 0; i < N; i++) {
		string first, second;
		cin >> first >> second;
		adsress_passward[first] = second;
	}

	for (int i = 0; i < M; i++) {
		string address;
		cin >> address;
		cout << adsress_passward[address] << "\n";
	}
	
	return 0;
}