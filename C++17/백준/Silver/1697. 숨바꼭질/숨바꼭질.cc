#include <iostream>
#include <queue>

using namespace std;

int che[100001];

int main() {
	ios::sync_with_stdio;
	cin.tie(0);


	int N, K;
	queue<int> Q;

	cin >> N >> K;
	Q.push(N); 
	che[N] = 1;

	while (!Q.empty()) {

		int re = Q.front();
		Q.pop();

		if (re == K){
			cout << che[re] - 1;
			return 0;
		}

		if (re - 1 >= 0 && che[re - 1] == 0) { // 범위 체크와 방문 여부 확인
			Q.push(re - 1);
			che[re - 1] = che[re] + 1; // 거리 갱신
		}

		if (re + 1 <= 100000 && che[re + 1] == 0) {
			Q.push(re + 1);
			che[re + 1] = che[re] + 1;
		}

		if (re * 2 <= 100000 && che[re * 2] == 0) {
			Q.push(re * 2);
			che[re * 2] = che[re] + 1;
		}

	}
	
	return 0;
}