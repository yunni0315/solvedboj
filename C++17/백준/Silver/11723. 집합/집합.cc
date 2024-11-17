#include <iostream>
#include<string>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int n;
	int S = 0;
	cin >> n;
	
	for (int i = 0; i < n; i++) {
		string cmd; int k;
		cin >> cmd;
		if (cmd == "add") {
			cin >> k;
			S |= (1 << k);
		}
		else if (cmd == "remove") {
			cin >> k;
			S &= ~(1 << k);
		}
		else if (cmd == "check") {
			cin >> k;
			if (S & (1 << k)) {
				cout << true << "\n";
			}
			else
				cout << false << "\n";
		}
		else if (cmd == "toggle") {
			cin >> k;
			if (S & (1 << k)) {
				S &= ~(1 << k);
			}
			else
				S |= (1 << k);
		}
		else if (cmd == "all") {
			S |= (1 << 21) - 1;
		}
		else{
			S = 0;
		}
	}

	return 0;
}