#include <iostream>
#include <vector>

using namespace std;
vector<int> Stack;
vector<char> result;
vector<int> list;


int main() {
	int n, cnt=0, i = 0;
	bool flag = false;
	cin >> n;
	
	for (int i = 1; i < n+1; i++) {
		int elem;
		cin >> elem;
		list.push_back(elem);
	}
	Stack.push_back(0);
	while (i < n) {
		if (list[i] < cnt && Stack.back() != list[i]) {
			cout << "NO";
			flag = false;
			break;
		}
		if (list[i] == Stack.back()) {
			Stack.pop_back();
			result.push_back('-');
			i++;
		}
		else {
			cnt++;
			Stack.push_back(cnt);
			result.push_back('+');
			flag = true;
		}
	}

	if(flag)
		for (int j = 0; j < result.size(); j++)
			cout << result[j] << "\n";
	
	return 0;
}