import java.util.Scanner;

public class s486032847 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String N = sc.next();
        // int N = sc.nextInt();
        // int X = sc.nextInt();
        // int T = sc.nextInt();

        if (keta(N) % 9 == 0) {
            System.out.println("Yes");
        } else {
            System.out.println("No");
        }
    }

    public static int keta(String s) {
        if (s.length() < 2) {
            return Integer.parseInt(s);
        }
        int n = 0;
        for (int i = 0; i < s.length(); i++) {
            n += Integer.parseInt(String.valueOf(s.charAt(i)));
        }
        return keta(String.valueOf(n));
    }
}