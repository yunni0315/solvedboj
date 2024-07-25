#include <iostream>
using namespace std;

int gcd(int a, int b)
{
	int c;
	while (b != 0)
	{
		c = a % b;
		a = b;
		b = c;
	}
	return a;
}

int lcm(int a, int b)
{
	return a * b / gcd(a, b);
}

int main() {
	int A, B;
	cin >> A >> B;
	int L,G;
	G = gcd(A, B);
	L = lcm(A, B);
	cout << G << "\n" << L;
	return 0;
}