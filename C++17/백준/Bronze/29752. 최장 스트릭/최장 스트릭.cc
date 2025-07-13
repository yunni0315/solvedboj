#include <iostream>
using namespace std;
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    int N,max = 0,cnt = 0;
    
    cin >> N;
    for(int i = 0; i < N; i++){
        int s;
        cin >> s;
        if(s == 0)
            cnt = 0;
        else{
            cnt++;
            if(cnt > max)
                max = cnt;
        }
    }
    cout << max << "\n";
    return 0;
}