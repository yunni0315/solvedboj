import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int N = input.nextInt();


        for (int i = 0; i < N; i++) {
            int sum = 0, cnt = 0;
            String s = input.next();

            for (int j = 0; j < s.length(); j++) {
                if(s.charAt(j) == 'O'){
                    cnt++;
                    sum += cnt;
                }
                else{
                    cnt=0;
                }
            }

            System.out.println(sum);
        }
    }
}
