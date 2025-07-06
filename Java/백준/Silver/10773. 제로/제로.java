import java.util.Stack;
import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int n = input.nextInt();
        Stack<Integer> list = new Stack<>();

        for (int i = 0; i < n; i++){
            int num = input.nextInt();
            if(num == 0){
                list.pop();
            }
            else{
                list.push(num);
            }
        }

        int result = 0;
        for (int i : list){
            result += i;
        }
        System.out.println(result);
    }
}
