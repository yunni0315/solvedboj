#include <iostream>
using namespace std;

int parent[1000001];

int getunion(int x) {
	if (parent[x] == x) return x;
	return parent[x] = getunion(parent[x]);
}

void unionparent(int a, int b) {
	a = getunion(a);
	b = getunion(b);
	if (a < b) parent[b] = a;
	else parent[a] = b;
}

int findunion(int a, int b) {
	a = getunion(a);
	b = getunion(b);
	return a == b;
}

int main() {
	int N, M;
	scanf("%d %d", &N, &M);

	for (int i = 1; i <= N + 1; i++) {
		parent[i] = i;
	}

	for (int i = 0; i < M; i++) {
		int set_plus, a, b;
		scanf("%d %d %d", &set_plus, &a, &b);
		if (!set_plus) unionparent(a, b);
		else {
			if (findunion(a, b))
				printf("YES\n");
			else
				printf("NO\n");
		}
	}


	return 0;
}