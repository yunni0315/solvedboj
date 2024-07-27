#include <iostream>
#include <vector>
#include <algorithm>>
using namespace std;
vector<int> Ns;int N, M;
void binary(int a) {
	int first = 0; int mid = 0; int end = N - 1;
	while (first <= end) {
		mid = (first + end) / 2;
		if (Ns[mid] == a) {
			printf("%d\n", 1);
			return;
		}

		else if (Ns[mid] > a)
			end = mid - 1;

		else
			first = mid + 1;
	}
	printf("%d\n", 0);
	return;
}

int main() {
	scanf("%d", &N);
	for (int i = 0; i < N; i++) {
		int a;
		scanf("%d", &a);
		Ns.push_back(a);
	}
	sort(Ns.begin(), Ns.end());

	scanf("%d", &M);
	for (int i = 0; i < M; i++) {
		int a;
		scanf("%d", &a);
		binary(a);
	}

	return 0;
}