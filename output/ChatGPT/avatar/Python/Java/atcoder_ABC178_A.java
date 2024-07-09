import java.util.Scanner;

public class atcoder_ABC178_A {
    public static void main(String[] args) {
        Scanner stdin = new Scanner(System.in);
        int tcs = 1;
        int tc = 1;
        while (tc <= tcs) {
            solve(tc, stdin);
            tc++;
        }
    }

    public static void solve(int tc, Scanner stdin) {
        int a = Integer.parseInt(stdin.nextLine().trim());
        System.out.println(a == 0 ? 1 : 0);
    }
}