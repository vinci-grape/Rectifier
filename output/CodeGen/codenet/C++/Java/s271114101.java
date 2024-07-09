public class s271114101 {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int a, b, c;
        a = in.nextInt();
        b = in.nextInt();
        c = in.nextInt();
        if ((a + b == c || b + c == a || a + c == b) && (a + b == c || b + c == a || a + c == b)) {
            System.out.println("Yes");
        } else {
            System.out.println("No");
        }
    }
}