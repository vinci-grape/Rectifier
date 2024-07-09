public class s404600540 {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int q = scanner.nextInt();
        int h = scanner.nextInt();
        int s = scanner.nextInt();
        int d = scanner.nextInt();
        int n = scanner.nextInt();
        int min_1 = Math.min(q*4, Math.min(h*2, Math.min(q*2+h, s)));
        int min_2 = Math.min(min_1*2, d);

        System.out.println((n % 2)*min_1 + (n / 2)*min_2);
    }
}