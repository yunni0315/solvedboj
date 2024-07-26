#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int N;
    cin >> N;

    vector<pair<int, string>> members(N);

    for (int i = 0; i < N; i++) {
        cin >> members[i].first >> members[i].second;
    }

    // 안정 정렬을 이용하여 나이순으로 정렬
    stable_sort(members.begin(), members.end(), [](const pair<int, string>& a, const pair<int, string>& b) {
        return a.first < b.first;
    });

    for (const auto& member : members) {
        cout << member.first << " " << member.second << "\n";
    }

    return 0;
}
