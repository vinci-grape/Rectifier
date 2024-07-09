import java.util.*;
import java.lang.*;
import java.io.*;
import java.math.*;
import java.util.stream.*;
import java.util.function.*;
import java.util.regex.*;

public class atcoder_ABC169_D {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int n = in.nextInt();
        if (n == 1) {
            System.out.println(0);
            return;
        }
        int[] a = new int[n];
        for (int i = 0; i < n; i++) {
            a[i] = in.nextInt();
        }
        int[] fac = new int[n];
        for (int i = 0; i < n; i++) {
            fac[i] = 1;
        }
        for (int i = 2; i < n; i++) {
            if (a[i] >= i) {
                fac[i] = fac[i] + fac[i - 1];
                a[i] -= i;
            }
        }
        int ans = 0;
        for (int i = 0; i < n; i++) {
            int x = fac[i];
            for (int j = 1; j < 99999999; j++) {
                if (x >= j) {
                    x -= j;
                    ans += 1;
                } else {
                    break;
                }
            }
        }
        System.out.println(ans);
    }
}