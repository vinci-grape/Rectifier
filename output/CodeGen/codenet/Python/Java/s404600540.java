public class s404600540 {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int q = in.nextInt();
        int h = in.nextInt();
        int s = in.nextInt();
        int d = in.nextInt();
        int n = in.nextInt();
        int min_1 = Math.min(q * 4, h * 2, q * 2 + h, s);
        int min_2 = Math.min(min_1 * 2, d);
        System.out.println((n % 2) * min_1 + (n // 2) * min_2);
    }
}