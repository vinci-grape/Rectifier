public class s504709360 {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        String S = in.next();
        int len = S.length();
        if (len < 26) {
            for (int i = 0; i < 26; i++) {
                char c = (char) ('a' + i);
                if (c!= S.charAt(0)) {
                    System.out.println(S + c);
                    return;
                }
            }
        } else {
            for (int i = len - 1; i >= 1; i--) {
                if (S.charAt(i - 1) > S.charAt(i)) {
                    String s1 = S.substring(0, i - 1);
                    for (int j = 0; j < 26; j++) {
                        char c = (char) ('a' + j);
                        if (c > S.charAt(i - 1) && c!= s1.charAt(s1.length() - 1)) {
                            System.out.println(s1 + c);
                            return;
                        }
                    }
                }
            }
        }
        System.out.println(-1);
    }
}