#include <iostream>
#include <string>

using namespace std;

int main() {
	int A, B, C;
	int sum = 0;
	int zero = 0, one = 0, two = 0, three = 0, four = 0, five = 0, six = 0, seven = 0, eight = 0, nine = 0;
	cin >> A >> B >> C;

	sum = A * B * C;
	string len;
	len = to_string(sum);

	for (int i = 0; i < len.size(); i++) {
		char s;
		s = len[i];
		switch (s)
		{
		case '0':
			zero++;
			break;
		case '1':
			one++;
			break;
		case '2':
			two++;
			break;
		case '3':
			three++;
			break;
		case '4':
			four++;
			break;
		case '5':
			five++;
			break;
		case '6':
			six++;
			break;
		case '7':
			seven++;
			break;
		case '8':
			eight++;
			break;
		case '9':
			nine++;
			break;
		default:
			break;
		}
	}

	cout << zero << "\n" <<  one << "\n" << two << "\n" << three << "\n" << four << "\n" << five << "\n" << six << "\n" << seven << "\n" << eight << "\n" << nine;

	return 0;
}