#include<iostream>
#include<vector>
using namespace std;
int A[1001];int V[1001];
int main() {
	int N, cnt = 0; int Ai; 
	
	scanf("%d", &N);
	for (int i = 0; i < N; i++) {
		int max = 0;
		scanf("%d", &Ai);
		A[i] = Ai;
		if (i == 0) V[i] = 1;
		for (int j = 0; j < i; j++) {
			if (A[j] > Ai) {
				if (max < V[j])
					max = V[j];
			}
		}
		V[i] = max + 1;
	}
	int max = -1;
	for (int i = 0; i < N; i++) {
		if (max < V[i]) {
			max = V[i];
		}
	}

	printf("%d", max);
	return 0;
}