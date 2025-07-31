import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int[][] arr = new int[100][100];
        int max = Integer.MIN_VALUE;
        int I = 0, J = 0;

        for(int i = 1; i < 10; i++){
            for(int j = 1; j < 10; j++){
                int n = input.nextInt();
                arr[i][j] = n;
                if(n > max){
                    max = n;
                    I = i;
                    J = j;
                }
            }
        }

        System.out.println(max);
        System.out.println(I + " " + J);
    }
}
