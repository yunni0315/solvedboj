#include <bits/stdc++.h>

using namespace std;
int answer = 0;
void DFS(int N, int sum, vector<int> &numbers, int target){
    if(N==numbers.size()){
        if(sum==target) answer++;
        return;
    }
    DFS(N+1, sum+numbers[N], numbers, target);
    DFS(N+1, sum-numbers[N], numbers, target);
}

int solution(vector<int> numbers, int target) {
     DFS(0, 0, numbers, target);
    return answer;
}