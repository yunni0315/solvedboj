#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N;
    double R_input;
    cin >> N >> R_input;

    // R을 1000배해서 정수로 변환 후 버림 처리 (소수 셋째 자리에서 버림)
    int R = static_cast<int>(R_input * 1000);
    R = (R / 10) * 10;

    // 성적 이름과 평점 대응 (1000배 스케일)
    vector<string> grade_names = {"F", "D0", "D+", "C0", "C+", "B0", "B+", "A0", "A+"};
    vector<int> grade_scores = {0, 1000, 1500, 2000, 2500, 3000, 3500, 4000, 4500};

    int total_credit = 0;
    int total_score = 0;

    // N-1개 과목 입력
    for (int i = 0; i < N - 1; i++) {
        int credit;
        string grade;
        cin >> credit >> grade;
        total_credit += credit;

        for (int j = 0; j < 9; j++) {
            if (grade == grade_names[j]) {
                total_score += grade_scores[j] * credit;
                break;
            }
        }
    }

    int last_credit;
    cin >> last_credit;
    total_credit += last_credit;

    bool found = false;

    // 낮은 성적부터 시도
    for (int i = 0; i < 9; i++) {
        int new_score = total_score + grade_scores[i] * last_credit;

        // GPA = 총점수 / 총학점 (1000배 스케일 유지)
        int gpa = new_score / total_credit;

        // 소수 셋째 자리 버림 처리
        gpa = (gpa / 10) * 10;

        if (gpa > R) {
            cout << grade_names[i] << '\n';
            found = true;
            break;
        }
    }

    if (!found) {
        cout << "impossible\n";
    }

    return 0;
}
