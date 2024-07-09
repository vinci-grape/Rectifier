public class s724326345 {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int A = in.nextInt();
        int B = in.nextInt();
        int C = in.nextInt();
        int X = in.nextInt();
        int Y = in.nextInt();
        int ans = 10000000;

        for (int k = 0; k <= Math.max(X, Y); k++) {
            int total = 2 * C * k + A * Math.max(0, X - k) + B * Math.max(0, Y - k);
            if (total < ans) {
                ans = total;
            }
        }

        System.out.println(ans);
    }
}