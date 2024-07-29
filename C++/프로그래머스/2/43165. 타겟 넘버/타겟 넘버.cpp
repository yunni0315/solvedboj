#include <bits/stdc++.h>

using namespace std;
int answer = 0;

void DFS(int N, int sum, int target, vector<int> &numbers){
    if(N == numbers.size()){
        if(sum == target)
            answer++;
        return;
    }
    
    DFS(N+1, sum+numbers[N], target, numbers);
    DFS(N+1, sum-numbers[N], target, numbers);
}

int solution(vector<int> numbers, int target) {
    DFS(0, 0, target, numbers);
    return answer;
}