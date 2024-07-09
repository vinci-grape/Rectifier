import java.util.Scanner;

public class atcoder_ABC145_B {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        String s = sc.next();
        if (n % 2 != 0) {
            System.out.println("No");
        } else if (s.substring(0, n / 2).equals(s.substring(n / 2, n))) {
            System.out.println("Yes");
        } else {
            System.out.println("No");
        }
    }
}