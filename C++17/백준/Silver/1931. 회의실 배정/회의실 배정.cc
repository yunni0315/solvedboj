#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int N;
    cin >> N;

    vector<pair<int, int>> timelist;
    for (int i = 0; i < N; i++) {
        int S, E;
        cin >> S >> E;
        timelist.push_back({S, E});
    }

    sort(timelist.begin(), timelist.end(), [](pair<int, int> a, pair<int, int> b) {
        if (a.second == b.second) return a.first < b.first;
        return a.second < b.second;
    });

    int count = 0, end = 0;
    for (int i = 0; i < N; i++) {
        if (end <= timelist[i].first) {
            end = timelist[i].second;
            count++;
        }
    }
    cout << count;
    return 0;
}
