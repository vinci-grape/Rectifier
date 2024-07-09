import java.util.Scanner;
public class codeforces_569_A {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t, s, q, ans = 0;
        t = sc.nextInt();
        s = sc.nextInt();
        q = sc.nextInt();
        while (s < t) {
            s *= q;
            ans++;
        }
        System.out.println(ans);
    }
}