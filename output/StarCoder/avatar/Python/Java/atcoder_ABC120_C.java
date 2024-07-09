import java.util.*;
import java.io.*;
public class atcoder_ABC120_C {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String s = sc.next();
        int n = s.length();
        int ans = 0;
        for (int i = 0; i < n; i++) {
            if (s.charAt(i) == s.charAt(i + 1)) {
                ans += 2;
            }
        }
        System.out.println(ans);
    }
}