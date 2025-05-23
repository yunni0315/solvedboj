import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int N = input.nextInt();
        int sum = 0;
        String numarr = input.next();
        for(int i = 0; i < N; i++){
            sum += (numarr.charAt(i) - '0');
        }
        System.out.println(sum);
    }
}
