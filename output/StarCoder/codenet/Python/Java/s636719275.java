import java.util.*;
public class s636719275 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String s = sc.next();
        String t = sc.next();
        int ans = 1000000;
        for (int i = 0; i < s.length(); i++) {
            String a = s.substring(i);
            if (a.length() >= t.length()) {
                ans = Math.min(ans, check(t, a.substring(0, t.length())));
            }
        }
        System.out.println(ans);
    }
    public static int check(String a, String b) {
        int s = 0;
        for (int i = 0; i < a.length(); i++) {
            if (a.charAt(i)!= b.charAt(i)) {
                s++;
            }
        }
        return s;
    }
}