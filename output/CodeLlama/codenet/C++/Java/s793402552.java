import java.util.Scanner;

public class s793402552 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int a = sc.nextInt();
        int b = sc.nextInt();
        String bstr = Integer.toString(b);
        int num = a * (int)Math.pow(10, bstr.length()) + b;

        int i;
        for (i = 1; i <= 100100; i++) {
            if (i * i == num) break;
        }

        if (i > 100100) System.out.println("No");
        else System.out.println("Yes");
    }
}