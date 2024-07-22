#include <iostream>

using namespace std;

int main() {
	int ascending = 0;
	int descending = 0;
	int input[8];

	for (int i = 0; i < 8; i++) {
		cin >> input[i];
		if (input[i] == (1 + i))
			ascending++;
		else if (input[i] == (8 - i))
			descending++;
	}

	if (ascending == 8)
		cout << "ascending";
	else if (descending == 8)
		cout << "descending";
	else
		cout << "mixed";

	return 0;
}