import java.util.*;
import java.math.*;

public class s582643375 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int X = sc.nextInt();
        int Y = sc.nextInt();
        if((X+Y) % 3!= 0) {
            System.out.println(0);
            return;
        }
        int n = (X+Y) / 3 + 1;
        int k = 2*(n-1) - Y + 1; // y = 2xより最も上にくる点からどれだけ離れているか。
        System.out.println(C(n-1, k-1));
    }

    static long C(int n, int k) {
        if(n < k) return 0;
        if(n < 0 || k < 0) return 0;
        long ans = 1;
        for(int i = 0; i < k; i++) {
            ans *= n-i;
            ans %= 1000000007;
        }
        return ans;
    }
}