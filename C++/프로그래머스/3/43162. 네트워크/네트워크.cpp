#include <bits/stdc++.h>

using namespace std;
int answer = 0;
int check[300] = {0,};

int solution(int n, vector<vector<int>> computers) {
    for(int i=0; i<computers.size();i++){
        if(check[i]==1) continue;
        answer+=1;
        queue<int>q;
        q.push(i);
        while(!q.empty()){
            int top = q.front();
            q.pop();
            if(check[top]==1) continue;
            check[top] = 1;
            for(int j = 0;j<computers[top].size();j++){
                if(check[j]==0 && computers[top][j]==1){
                    q.push(j);
                }
            }
        }
        
    }    
    return answer;
}