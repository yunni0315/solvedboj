#include <vector>
#include <algorithm>

using namespace std;

int solution(int n, vector<int> lost, vector<int> reserve) {
    vector<int> student(n + 1, 1);
    
    // 여벌 체육복을 가진 학생들 처리
    for (int r : reserve) {
        student[r]++;
    }
    
    // 체육복을 도난당한 학생들 처리
    for (int l : lost) {
        student[l]--;
    }
    
    // 체육복 빌려주기 처리
    for (int i = 1; i <= n; ++i) {
        if (student[i] == 0) {
            if (i > 1 && student[i - 1] == 2) {
                student[i - 1]--;
                student[i]++;
            } else if (i < n && student[i + 1] == 2) {
                student[i + 1]--;
                student[i]++;
            }
        }
    }
    
    // 체육 수업에 참석할 수 있는 학생 수 계산
    int answer = 0;
    for (int i = 1; i <= n; ++i) {
        if (student[i] > 0) {
            answer++;
        }
    }
    
    return answer;
}
