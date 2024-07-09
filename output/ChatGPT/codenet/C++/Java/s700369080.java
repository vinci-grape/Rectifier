import java.util.Scanner;

public class s700369080 {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        long x1, x2, y1, y2;
        x1 = input.nextLong();
        y1 = input.nextLong();
        x2 = input.nextLong();
        y2 = input.nextLong();
        final long dx = x2 - x1, dy = y2 - y1;
        long x3 = x2 - dy, y3 = y2 + dx;
        long x4 = x1 - dy, y4 = y1 + dx;
        System.out.println(x3 + " " + y3 + " " + x4 + " " + y4);
    }
}