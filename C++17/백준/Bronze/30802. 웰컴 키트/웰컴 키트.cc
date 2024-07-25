#include <iostream>
using namespace std;
int main() {
	int N,T,P;
	int Size[6];

	cin >> N;

	for (int i = 0; i < 6; i++) {
		cin >> Size[i];
	}

	cin >> T >> P;

	int Pen_bundle = N / P;
	int Pen_single = N % P;
	int Tshirt_set = 0;

	for (int i = 0; i < 6; i++) {
		if (Size[i] > 0) {
			Tshirt_set += (Size[i] + T - 1) / T;
		}
			
	}
	cout << Tshirt_set << "\n" << Pen_bundle << ' ' << Pen_single;

	return 0;
}