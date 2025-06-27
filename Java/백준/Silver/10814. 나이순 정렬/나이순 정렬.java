import java.util.Scanner;
import java.util.Vector;
import java.util.Collections;
import java.util.Comparator;

class Pair {
    int age;
    String name;

    public Pair(int age, String name) {
        this.age = age;
        this.name = name;
    }
}

public class Main {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int N = input.nextInt();
        Vector<Pair> member = new Vector<>();

        // 회원 정보 입력
        for (int i = 0; i < N; i++) {
            int num = input.nextInt();
            String str = input.next();
            member.add(new Pair(num, str));
        }

        // 나이순으로 안정 정렬 (가입 순 유지)
        Collections.sort(member, new Comparator<Pair>() {
            @Override
            public int compare(Pair a, Pair b) {
                return Integer.compare(a.age, b.age);
            }
        });

        // 결과 출력
        for (Pair p : member) {
            System.out.println(p.age + " " + p.name);
        }

        input.close();
    }
}
