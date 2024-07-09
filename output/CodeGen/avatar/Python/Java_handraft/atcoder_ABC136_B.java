import java.util.*;

public class atcoder_ABC136_B {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int n = in.nextInt();
        int i = 1;
        int ans = 0;
        while (Math.pow(10, i) <= n) {
            ans += (Math.pow(10, i) - Math.pow(10, (i - 1)));
            i += 2;
        }
        ans += Math.max(0, n - Math.pow(10, i - 1) + 1);
        System.out.println(ans);
    }
}