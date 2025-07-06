import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        // 1. Scanner 객체 생성
        Scanner sc = new Scanner(System.in);

        // 2. 전체 사람 수(N) 입력
        int n = sc.nextInt();

        // 3. N명의 몸무게와 키 정보를 담을 2차원 배열 생성
        int[][] people = new int[n][2];

        // 4. N명의 데이터를 배열에 저장
        for (int i = 0; i < n; i++) {
            people[i][0] = sc.nextInt(); // 몸무게
            people[i][1] = sc.nextInt(); // 키
        }

        // 효율적인 문자열 처리를 위해 StringBuilder 사용
        StringBuilder sb = new StringBuilder();

        // 5. 각 사람의 등수 계산
        for (int i = 0; i < n; i++) {
            int rank = 1; // 등수를 1로 초기화
            
            // i번째 사람과 나머지 j번째 사람들을 비교
            for (int j = 0; j < n; j++) {
                // j번째 사람이 i번째 사람보다 덩치가 더 크다면 rank 증가
                if (people[j][0] > people[i][0] && people[j][1] > people[i][1]) {
                    rank++;
                }
            }
            // 계산된 등수를 StringBuilder에 추가
            sb.append(rank).append(" ");
        }

        // 6. 최종 결과 출력
        System.out.println(sb.toString().trim());

        // 7. Scanner 리소스 정리
        sc.close();
    }
}