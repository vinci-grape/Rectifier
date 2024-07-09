public class s676839884 {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        String s = in.next();
        String t = in.next();
        if (t.substring(0, t.length() - 1).equals(s)) {
            System.out.println("Yes");
        } else {
            System.out.println("No");
        }
    }
}