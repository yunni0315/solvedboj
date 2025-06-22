#include <iostream>
#include <stack>
using namespace std;

int family[101][101] = { 0 };
bool visited[101] = { false };

int dfs(int start, int end, int people_num) {
	stack<pair<int,int>> s;
	s.push(make_pair(start,0));

	while (!s.empty()) {
		pair<int, int> current = s.top();
		visited[current.first] = true;
		s.pop();
		if (current.first == end) {
			return current.second;
		}
		for (int i = 1; i <= people_num; i++) {
			if (family[current.first][i] == 1 && !visited[i]) {
				s.push(make_pair(i,current.second+1));
			}
		}
	}
	return -1;
}

int main() {
	int people_num = 0, startPerson = 0, endPerson = 0, chonsu = 0;

	scanf("%d", &people_num);
	scanf("%d %d", &startPerson, &endPerson);
	scanf("%d", &chonsu);

	for (int i = 1; i <= chonsu; i++) {
		int a, b;
		scanf("%d %d", &a, &b);
		family[a][b] = 1;
		family[b][a] = 1; // 양방향 연결
	}

	printf("%d", dfs(startPerson, endPerson, people_num));

	return 0;
}