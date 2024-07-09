import java.util.*;

public class s173139590 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int ac_count = 0;
        int wa_count = 0;
        int tle_count = 0;
        int re_count = 0;
        for (int i = 0; i < n; i++) {
            String s = sc.next();
            if (s.equals("AC")) {
                ac_count++;
            } else if (s.equals("WA")) {
                wa_count++;
            } else if (s.equals("TLE")) {
                tle_count++;
            } else if (s.equals("RE")) {
                re_count++;
            }
        }
        System.out.println("AC x " + ac_count);
        System.out.println("WA x " + wa_count);
        System.out.println("TLE x " + tle_count);
        System.out.println("RE x " + re_count);
    }
}