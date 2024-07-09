public class s173139590 {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int n = in.nextInt();
        int ac_count = 0;
        int wa_count = 0;
        int tle_count = 0;
        int re_count = 0;
        for (int i = 0; i < n; i++) {
            String s = in.next();
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
        System.out.println(ac_count + " x " + ac_count);
        System.out.println(wa_count + " x " + wa_count);
        System.out.println(tle_count + " x " + tle_count);
        System.out.println(re_count + " x " + re_count);
    }
}