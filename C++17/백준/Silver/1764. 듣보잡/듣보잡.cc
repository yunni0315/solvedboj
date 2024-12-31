#include <iostream>
#include <vector>
#include <string>
#include <unordered_set>
#include <algorithm>

using namespace std;

int A = 0;

vector<string> findIntersection(const vector<string>& v1, const vector<string>& v2) {
    unordered_set<string> set1(v1.begin(), v1.end());
    vector<string> result;

    for (const string& str : v2) {
        if (set1.count(str)) {  // 교집합에 포함되는 경우
            result.push_back(str);
            set1.erase(str);    // 중복 제거를 위해 한 번 찾으면 삭제
            A++;
        }
    }

    return result;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int N, M;
    cin >> N >> M;

    vector<string> no_listen(N);
    vector<string> no_see(M);

    for (int i = 0; i < N; i++) {
        cin >> no_listen[i];
    }

    for (int i = 0; i < M; i++) {
        cin >> no_see[i];
    }

    // 교집합 찾기
    vector<string> result = findIntersection(no_listen, no_see);

    // 사전순 정렬
    sort(result.begin(), result.end());

    // 출력
    cout << A << "\n";
    for (const string& name : result) {
        cout << name << "\n";
    }

    return 0;
}
