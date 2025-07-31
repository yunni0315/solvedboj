import java.util.Scanner;
public class Main {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int x = input.nextInt();
        int y = input.nextInt();
        int w = input.nextInt();
        int h = input.nextInt();
        int minx = (x-0 > w-x) ? x : w-x;
        minx = (x-0 < w-x) ? x : w-x;
        int miny = (y-0 > h-y) ? y : h-y;
        miny = (y-0 < h-y) ? y : h-y;
        int min = (miny > minx) ? miny : miny;
        min = (miny < minx) ? miny : minx;
        System.out.println(min);
    }
}
