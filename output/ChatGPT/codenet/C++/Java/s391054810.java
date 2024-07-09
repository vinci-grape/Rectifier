import java.util.Scanner;

public class s391054810 {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int h = scanner.nextInt();
        int w = scanner.nextInt();
        int hh = scanner.nextInt();
        int ww = scanner.nextInt();
        int result = (h - hh) * (w - ww);
        System.out.println(result);
    }
}