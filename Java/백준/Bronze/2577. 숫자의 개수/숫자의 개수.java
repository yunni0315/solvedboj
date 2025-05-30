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
            if (num == 0){
                numbers[num]++;
            }
            else if (num == 1){
                numbers[num]++;
            }
            else if (num == 2){
                numbers[num]++;
            }
            else if (num == 3){
                numbers[num]++;
            }
            else if (num == 4){
                numbers[num]++;
            }
            else if (num == 5){
                numbers[num]++;
            }
            else if (num == 6){
                numbers[num]++;
            }
            else if (num == 7){
                numbers[num]++;
            }
            else if (num == 8){
                numbers[num]++;
            }
            else {
                numbers[num]++;
            }
        }

        for (int i = 0; i < 10; i++) {
            System.out.println(numbers[i]);
        }
    }
}
