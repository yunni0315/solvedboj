import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int hour = input.nextInt();
        int minute = input.nextInt();
        int time = input.nextInt();

        minute += time;
        if(minute > 59) {
            int H = minute / 60;
            minute %= 60;
            hour += H;
            if(hour > 23) {
                hour %= 24;
            }
        }
        System.out.println(hour + " " + minute);
    }
}
