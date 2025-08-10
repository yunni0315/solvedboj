import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int[] arr = new int[8];
        int[] arr2 = {1,2,3,4,5,6,7,8};
        int[] arr3 = {8,7,6,5,4,3,2,1};
        int a2 = 0, a3 = 0;
        for(int i = 0; i < 8; i++){
            int n = sc.nextInt();
            arr[i] = n;
            if(n == arr2[i]){
                a2++;
            }
            if(n == arr3[i]){
                a3++;
            }
        }
        if(a2 == 8){
            System.out.println("ascending");
        }
        else if(a3 == 8){
            System.out.println("descending");
        }
        else{
            System.out.println("mixed");
        }

        sc.close();
    }
}
