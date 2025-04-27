import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int N = input.nextInt();
        int[] arr = new int[N];
        int min = 999999;
        int max = -999999;
        int min_c = 0;
        int max_c = 0;
        for (int i = 0; i < N; i++) {
            int ele = input.nextInt();
            if (ele < min) {
                min = ele;
                min_c = i;
            }
            if (ele > max) {
                max = ele;
                max_c = i;
            }
            arr[i] = ele;
        }
        System.out.print(arr[min_c]);
        System.out.print(" ");
        System.out.print(arr[max_c]);
    }
}
