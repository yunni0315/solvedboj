import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);

        int A = input.nextInt();
        int B = input.nextInt();
        int C = input.nextInt();

        long  D = A*B*C;
        String Dstr = Long.toString(D);

        int[] numbers = new int[10];

        for (int i = 0; i < Dstr.length(); i++) {
            int num = Dstr.charAt(i) - '0';
            numbers[num]++;
        }

        for (int i = 0; i < 10; i++) {
            System.out.println(numbers[i]);
        }
    }
}
