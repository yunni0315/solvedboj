import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int bill = input.nextInt();
        int N = input.nextInt();
        int SUM = 0;
        for (int i = 0; i < N; i++) {
            int price = input.nextInt();
            int cnt = input.nextInt();
            SUM += price * cnt;
        }

        if(SUM == bill){
            System.out.println("Yes");
        }
        else {
            System.out.println("No");
        }
    }
}
