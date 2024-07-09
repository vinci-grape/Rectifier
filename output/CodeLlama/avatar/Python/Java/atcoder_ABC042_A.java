import java.util.Scanner;

public class atcoder_ABC042_A {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int a = sc.nextInt();
        int b = sc.nextInt();
        int c = sc.nextInt();
        if (a == 5 && b == 5) {
            if (c == 2) {
                System.out.println("YES");
            } else {
                System.out.println("NO");
            }
        } else if (a == 5 && c == 5) {
            if (b == 2) {
                System.out.println("YES");
            } else {
                System.out.println("NO");
            }
        } else if (b == 5 && c == 5) {
            if (a == 2) {
                System.out.println("YES");
            } else {
                System.out.println("NO");
            }
        } else {
            System.out.println("NO");
        }
    }
}