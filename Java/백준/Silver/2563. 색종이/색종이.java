import java.util.Scanner;
public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int N = sc.nextInt(); 
        boolean[][] paper = new boolean[101][101];

        int totalArea = 0; 
        
        for (int k = 0; k < N; k++) {
            int x = sc.nextInt(); 
            int y = sc.nextInt();

            for (int i = x; i < x + 10; i++) {
                for (int j = y; j < y + 10; j++) {
                    if (!paper[i][j]) {
                        paper[i][j] = true; 
                        totalArea++;       
                    }
                }
            }
        }

        System.out.println(totalArea);
    }
}
