#include<iostream>
#include <vector>
using namespace std;

int main() {
	bool flag = false;
	int N;
	cin >> N;

	while (N--) {
		vector<char> arr;
		string str;
		cin >> str;
		for (int i = 0; i < str.length(); i++) {
			if (str[i] == ')') {                           
				if (arr.empty()) {						   
					flag = false;
					//cout << "NO\n";
					break;
				}
				arr.pop_back();
			}
			else
			{
				arr.push_back(str[i]);
				flag = true;
			}
		}
		if (arr.empty() && flag==true)
			cout << "YES\n";
		else
			cout << "NO\n";
	}
	return 0;
}