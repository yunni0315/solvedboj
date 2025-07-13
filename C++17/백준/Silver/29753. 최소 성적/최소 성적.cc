#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie();
	cout.tie();

	int N;
	double AllCredit = 0, Credit, R, GPA = 0;
	
	double Grades[10] = { 0, 1000, 1500, 2000, 2500, 3000, 3500, 4000, 4500 }; // D0 ~ A+에 해당하는 점수
	string GradesStr[10] = { "F", "D0", "D+", "C0", "C+", "B0", "B+", "A0", "A+" }; // 성적 문자열

	cin >> N >> R; // N: 과목 수, R: 목표 평점
	R = R * 1000; // 목표 평점을 1000배로 변환하여 정수로 처리

	for (int i = 0; i < N - 1; i++) {
		string Grade;

		cin >> Credit >> Grade; // 학점과 성적 입력
		AllCredit += Credit; 

		for (int j = 0; j < 9; j++) {
			if (Grade == GradesStr[j]) { // 입력된 성적에 해당하는 점수 찾기
				GPA += Grades[j] * Credit; // GPA 계산
				break;
			}
		}
	}

	cin >> Credit;       //학점 입력
	AllCredit += Credit; //총 학점 계산
	bool isPossible = false; // 목표 평점 달성 가능 여부

	for (int i = 0; i < 9; i++) {
		int score = (GPA + Grades[i] * Credit); // 현재 GPA에 해당 성적을 추가한 점수 계산
		score = score / AllCredit;
		score = (score / 10) * 10;

		if (score > R) {
			isPossible = true;
			cout << GradesStr[i] << "\n"; // 목표 평점을 초과하는 성적 출력
			break;
		}
	}

	if (!isPossible) {
		cout << "impossible\n"; // 목표 평점을 달성할 수 없는 경우
	}
	
	return 0;
}