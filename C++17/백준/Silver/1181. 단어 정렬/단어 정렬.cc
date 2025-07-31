#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;
bool compare(string a, string b) {
	if (a.length() == b.length()) {
		for (int i = 0; i < a.length(); i++) {
			if (a[i] != b[i])
				return a[i] < b[i];
		}
	}
	return a.length() < b.length();
}

int main() {
	vector<string> arr;
	int n;
	cin >> n;
	string str;
	for (int i = 0; i < n; i++) {
		cin >> str;
		arr.push_back(str);
	}
	
	sort(arr.begin(), arr.end(), compare);

	for (int i = 0; i < n; i++) {
		if (i > 0 && arr[i - 1] == arr[i]) {
			continue;
		}
		cout << arr[i] << "\n";
	}
	

	return 0;
}