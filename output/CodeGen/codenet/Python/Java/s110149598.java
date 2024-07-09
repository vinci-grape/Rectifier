public class s110149598 {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        String a = in.next();
        String b = in.next();
        if (a.compareTo(b) < 0) {
            System.out.print("<");
        } else if (a.compareTo(b) > 0) {
            System.out.print(">");
        } else {
            System.out.print("=");
        }
    }
}