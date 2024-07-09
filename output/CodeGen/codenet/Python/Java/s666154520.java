public class s666154520 {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int n = in.nextInt();
        for (int i = 1; i < 10_000; i++) {
            if (i * i > n) {
                System.out.println((i - 1) * (i - 1));
                System.exit(0);
            }
        }
    }
}