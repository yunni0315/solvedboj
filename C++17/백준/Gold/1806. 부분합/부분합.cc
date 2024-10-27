#include<iostream>
using namespace std;

int num[1000001];

int main() {
    int n, s; 
	scanf("%d %d", &n, &s);

	for (int i = 0; i < n; i++) {
		scanf("%d", &num[i]);
	}

	int end = 0, min = n+1, sum = 0;
    
	for (int start = 0; start < n; start++) {
		while (sum < s && end < n) {
			sum += num[end];
			end++;	
		}
		
		if (sum >= s) {
			if (end - start < min)
				min = end - start;
		}
		sum -= num[start];
	}
	if (min == n + 1) {
		printf("0\n");
	}
	else {
		printf("%d\n", min);
	}
	return 0;
}