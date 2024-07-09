import java.util.Scanner;

public class codeforces_608_A {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int n = in.nextInt();
        int s = in.nextInt();
        int c = 0;
        for (int i = 0; i < n; i++) {
            int f = in.nextInt();
            int t = in.nextInt();
            int x = t - (s - f);
            if (x > c) {
                c = x;
            }
        }
        System.out.println(s + c);
    }
}