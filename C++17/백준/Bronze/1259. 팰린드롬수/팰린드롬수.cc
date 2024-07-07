#include <iostream>
#include <string>
#include <list>
using namespace std;

int main() {
	string num;

	while (1) {
		bool flag = true;
		cin >> num;
		if (num == "0")
			return 0;
		int len = num.length();
		for (int i = 0; i < len/2; i++) {
			if (num[i] == num[len - i-1])
				flag = true;
			else {
				flag = false;
				break;
			}
		}
		if (flag == true)
			cout << "yes" << endl;
		else
			cout << "no" << endl;
	}
		
	return 0;
}