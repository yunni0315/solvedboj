import java.util.Scanner;
import java.util.Stack;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        
        int n = sc.nextInt();
        
        Stack<Integer> stack = new Stack<>();
        StringBuilder sb = new StringBuilder(); 
        
        int currentNum = 1; 
        
        for (int i = 0; i < n; i++) {
            int target = sc.nextInt(); 
            
            while (currentNum <= target) {
                stack.push(currentNum);
                sb.append("+\n");
                currentNum++;
            }
            
            if (!stack.isEmpty() && stack.peek() == target) {
                stack.pop();
                sb.append("-\n");
            } else {
                System.out.println("NO");
                sc.close();
                return;
            }
        }
        
        System.out.print(sb.toString());
        
        sc.close();
    }
}