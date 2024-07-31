#include <iostream>
using namespace std;

int parent[201];
int plan[1001];

int getunion(int x) {
	if (parent[x] == x) return x;
	return parent[x] = getunion(parent[x]);
}

void unionParent(int a, int b) {
	a = getunion(a);
	b = getunion(b);
	if (a < b) parent[b] = a;
	else parent[a] = b;
}

int unionfind(int a, int b) {
	a = getunion(a);
	b = getunion(b);
	return a == b;
}

int main() {
	int N, M;
	cin >> N >> M;

	for (int i = 1; i <= N; i++)
		parent[i] = i;
	
	for (int i = 1; i <= N; i ++ ) {
		for (int j = 1; j <= N; j++) {
			int a;
			cin >> a;
			if (a == 1)
				unionParent(i, j);
		}
	}

	for (int i = 0; i < M; i++) {
		cin >> plan[i];
	}

	bool flag = true;
	for (int i = 0; i < M - 1; i++) {
		if (!unionfind(plan[i], plan[i + 1]))
		{
			flag = false;
			break;
		}
	}
	
	if (flag)
		cout << "YES";
	else
		cout << "NO";

	return 0;
}