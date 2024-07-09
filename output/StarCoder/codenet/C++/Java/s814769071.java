import java.util.*;
import java.io.*;

public class s814769071 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int k = sc.nextInt();
        int MOD = 1000000007;
        int mx = n * (n + 1) / 2 - (n - k)*(n - k + 1) / 2;
        int mn = k * (k - 1) / 2;
        int res = 0;
        for (int i = k; i <= n + 1; ++i)
        {
            res += mx - mn + 1;
            mx += n - i;
            mn += i;
            res %= MOD;
        }
        System.out.println(res);
    }
}