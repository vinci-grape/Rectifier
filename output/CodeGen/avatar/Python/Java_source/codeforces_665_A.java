import java.util.Scanner;
import java.util.Map;
import java.util.HashMap;

public class codeforces_665_A {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int a = in.nextInt();
        int b = in.nextInt();
        int t1 = in.nextInt();
        int t2 = in.nextInt();
        int st = t2 + (t1 - 5) * 60;
        int fin = st + a;
        int now = 0;
        int ans = 0;
        while (now < fin && now < 1140) {
            if (now + b > st) {
                ans += 1;
            }
            now += b;
        }
        System.out.println(ans);
    }
}