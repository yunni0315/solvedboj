#include <iostream>
#include <vector>
#include<queue>
using namespace std;

int main() {
	int n, k, die = 0, check;
	queue<int> yoseipus;
	
	cin >> n >> k;
	check = n;
	for (int i = 1; i <= n; i++)
		yoseipus.push(i);
	
	cout << "<";
	
	while (check--) {
		for (int i = 0; i < k; i++) {
			if ((i + 1) == k) {
				if(check == 0)
					cout << yoseipus.front() << ">";
				else
					cout << yoseipus.front() << ", ";
			}
			else{
				yoseipus.push(yoseipus.front());
			}
			yoseipus.pop();
		}
	}
	

	return 0;
}