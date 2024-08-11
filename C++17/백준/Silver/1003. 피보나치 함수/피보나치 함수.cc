#include<iostream>
int memo[10000];
int zero[10000];
int one[10000];

void fibonacci(int n) {
    for (int i = 2; i <= n; i++) {
        zero[i] = zero[i - 1] + zero[i - 2];
        one[i] = one[i - 1] + one[i - 2];
    }
}


int main() {
    zero[0] = 1;
    zero[1] = 0;
    one[0] = 0;
    one[1] = 1;
    int n,t;
    scanf("%d", &t);
    for (int i = 0; i < t; i++) {
        scanf("%d", &n);
        fibonacci(n);
        printf("%d %d\n", zero[n], one[n]);
    }

    return 0;
}