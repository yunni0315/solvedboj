import java.util.Scanner;
public class Main {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);

        int N = input.nextInt();
        int M = input.nextInt();
        int[] intArray  = new int[N+1];
        for(int i = 1; i < N+1; i++){
            intArray[i] = i;
        }

        int i, j;
        for(int l = 0; l < M; l++){
            i = input.nextInt();
            j = input.nextInt();
            intArray[0] = intArray[i];
            intArray[i] = intArray[j];
            intArray[j] = intArray[0];
        }

        for(int k = 1; k < N+1; k++){
            System.out.print(intArray[k] + " ");
        }
    }
}
