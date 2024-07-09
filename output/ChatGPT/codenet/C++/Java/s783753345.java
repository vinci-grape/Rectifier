import java.util.Scanner;

public class s783753345 {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int a, b;
        char S;
        while (true) {
            a = scanner.nextInt();
            S = scanner.next().charAt(0);
            b = scanner.nextInt();
            if (S == '+') System.out.println(a + b);
            if (S == '-') System.out.println(a - b);
            if (S == '*') System.out.println(a * b);
            if (S == '/') System.out.println(a / b);
            if (S == '?') break;
        }
    }
}