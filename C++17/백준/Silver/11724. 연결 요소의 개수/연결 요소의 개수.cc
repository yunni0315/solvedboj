#include <iostream>
using namespace std;

int graph[10001];
int check[10001];

int getparent(int x) {
    if (graph[x] == x) return x;
    return graph[x] = getparent(graph[x]);
}

void unionparent(int a, int b) {
    a = getparent(a);
    b = getparent(b);
    if (a < b) graph[b] = a;
    else graph[a] = b;
}

int main() {
    int N, M;
    scanf("%d %d", &N, &M);

    for (int i = 1; i <= N; i++) {
        graph[i] = i;
    }

    for (int i = 0; i < M; i++) {
        int a, b;
        scanf("%d %d", &a, &b);
        unionparent(a, b);
    }

    int cnt = 0;

    for (int i = 1; i <= N; i++) {
        int parent = getparent(i);
        check[parent]++;
    }

    for (int i = 1; i <= N; i++) {
        if (check[i] > 0) {
            cnt++;
        }
    }

    printf("%d", cnt);

    return 0;
}
