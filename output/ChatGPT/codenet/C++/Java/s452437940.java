import java.util.Scanner;

public class s452437940 {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        long a = scanner.nextLong();
        long b = scanner.nextLong();
        long x = scanner.nextLong();

        long s = (b / x - a / x);
        if (a % x == 0)
            s++;

        System.out.println(s);
    }
}