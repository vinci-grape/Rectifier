public class s195311365 {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        String s = in.next();
        if (s.length() == 2) {
            System.out.println(s);
        } else {
            System.out.println(s.substring(1, s.length()));
        }
    }
}