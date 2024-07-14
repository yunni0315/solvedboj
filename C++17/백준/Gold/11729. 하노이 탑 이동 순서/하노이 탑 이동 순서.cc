#include <iostream>
using namespace std;

int hanoi_moving(int n) {
	int num = 1;
	if (n == 1) return 1;
	
	return hanoi_moving(n - 1) * 2 + 1;
}

void hanoitop(int from, int to, int temp, int disk) {
	if (disk == 1) {
		cout << from << " " << to << "\n";
	}
	else {
		hanoitop(from, temp, to, disk-1);
		cout << from << " " << to << "\n";
		hanoitop(temp, to, from, disk - 1);
	}
}

int main() {
	int n, num = 0;
	cin >> n;
	num = hanoi_moving(n);
	cout << num << "\n";
	hanoitop(1, 3, 2, n);

	return 0;
}