import java.util.*;
import java.io.*;

public class s384319383 {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int n = in.nextInt();
        int[] cnt = new int[26];
        char[] s = new char[n];
        for (int i = 0; i < n; i++) {
            s[i] = in.next().charAt(0);
            cnt[s[i] - 'a']++;
        }
        long ans = cnt[0];
        for (int i = 1; i < 26; i++) {
            ans *= cnt[i];
            ans %= 1000000007;
        }
        System.out.println(ans - 1);
    }
}