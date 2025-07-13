import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int max = 0,cnt = 0, max_gps=0;

        for(int i = 0; i < 9; i++){
            int N = input.nextInt();
            cnt++;
            if(N > max){
                max = N;
                max_gps = cnt;
            }
        }

        System.out.println(max);
        System.out.println(max_gps);
    }
}
