public class s952876397 {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int n = in.nextInt();
        String s = in.next();
        int left = 0;
        for (int i = 0; i < s.length(); i++) {
            if (s.charAt(i) == ')') {
                left++;
            } else {
                break;
            }
        }
        int left1 = 0;
        int right1 = 0;
        for (int i = 0; i < n; i++) {
            if (s.charAt(i) == '(') {
                right1++;
            } else if (right1 > 0) {
                right1--;
            } else {
                left1++;
            }
        }
        left1 += left;
        for (int i = 0; i < right1; i++) {
            s += ")";
        }
        for (int i = 0; i < left1; i++) {
            s = "(" + s;
        }
        System.out.println(s);
    }
}