#include <bits/stdc++.h>

using namespace std;

string solution(string s) {
    string answer = "",n;
    vector<int> num;
    stringstream ss(s);
    int max=-99999,min=99999;
    while(getline(ss, n, ' '))
        num.push_back(stoi(n));
    
    for(int i = 0; i < num.size(); i++){
        if(max < num[i])
            max = num[i];
        if(min > num[i])
            min = num[i];
    }
    
    answer += to_string(min);
    answer += " ";
    answer += to_string(max);
    
    return answer;
}