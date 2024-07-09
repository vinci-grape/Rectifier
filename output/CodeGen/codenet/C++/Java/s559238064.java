public class s559238064 {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        String S = in.next();
        int a = S.length();
        for (int i = 0; i < a - 1; i++) {
            if (S.charAt(i) == S.charAt(i + 1)) {
                System.out.println("Bad");
                return;
            }
        }
        System.out.println("Good");
    }
}