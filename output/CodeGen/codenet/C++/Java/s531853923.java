public class s531853923 {
    public static void main(String[] args) {
        int a, b, c, d;
        Scanner in = new Scanner(System.in);
        a = in.nextInt();
        b = in.nextInt();
        c = in.nextInt();
        d = in.nextInt();
        if ((a * b % 2 == 1) && ((c + d) % 2 == 1)) {
            System.out.println("No");
        } else {
            System.out.println("Yes");
        }
    }
}