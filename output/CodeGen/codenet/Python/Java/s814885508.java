public class s814885508 {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int X = in.nextInt();
        int K = in.nextInt();
        int D = in.nextInt();
        int r = X / D;
        if (Math.abs(r) > K) {
            System.out.println(Math.abs(X) - K * D);
            return;
        }
        int a = X - r * D;
        if ((K - r) % 2 == 0) {
            System.out.println(a);
        } else {
            System.out.println(Math.abs(D - a));
        }
    }
}