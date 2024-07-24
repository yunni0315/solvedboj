#include <iostream>
using namespace std;
int main() {
	while (1) {
		long long int a, b, c, a2, b2, c2;
		cin >> a >> b >> c;
		if (a == 0 && b == 0 && c == 0)
			break;
		else {
			if (a > b && a > c) {
				a2 = a * a;
				b2 = b * b;
				c2 = c * c;
				if (a2 == b2 + c2)
					cout << "right\n";
				else
					cout << "wrong\n";
			}
			else if (b > a && b > c) {
				a2 = a * a;
				b2 = b * b;
				c2 = c * c;
				if (b2 == a2 + c2)
					cout << "right\n";
				else
					cout << "wrong\n";
			}
			else {
				a2 = a * a;
				b2 = b * b;
				c2 = c * c;
				if (c2 == b2 + a2)
					cout << "right\n";
				else
					cout << "wrong\n";
			}
		}
			
	}

	return 0;
}