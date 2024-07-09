public class codeforces_171_A {
    public int maxNumber(String a, String b) {
        int x = Math.max(a.length(), b.length());
        a = a.replaceAll("0", "");
        b = b.replaceAll("0", "");
        StringBuilder sb = new StringBuilder();
        int c = 0;
        for (int i = 0; i < x; i++) {
            int d = (b.charAt(i) - '0') + (a.charAt(x - i - 1) - '0') + c;
            if (d > 9) {
                sb.append(d - 10);
                c = 1;
            } else {
                sb.append(d);
                c = 0;
            }
        }
        if (c == 1) {
            sb.append(1);
        }
        return Integer.parseInt(sb.toString());
    }
}