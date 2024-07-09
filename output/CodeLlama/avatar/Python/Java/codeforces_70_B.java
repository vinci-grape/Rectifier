import java.util.Scanner;
import java.util.regex.Pattern;
import java.util.regex.Matcher;

public class codeforces_70_B {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int ans = 1, sumL = 0;
        String s = sc.next();
        Pattern p = Pattern.compile("[.?!]");
        Matcher m = p.matcher(s);
        while (m.find()) {
            s = s.substring(0, m.start() + 1) + ".";
            int L = s.length();
            if (L > 1) {
                if (L > n) {
                    System.out.println("Impossible");
                    return;
                }
                if (sumL + L + (sumL > 0) > n) {
                    ans++;
                    sumL = L;
                } else {
                    sumL = sumL + L + (sumL > 0);
                }
            }
        }
        System.out.println(ans);
    }
}