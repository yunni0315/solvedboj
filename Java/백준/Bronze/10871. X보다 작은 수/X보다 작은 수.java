import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int N = input.nextInt();
        int X = input.nextInt();

        for(int i = 1; i <= N; i++){
            int num = input.nextInt();
            if(num < X){
                System.out.print(num);
                System.out.print(" ");
            }
        }
    }
}
