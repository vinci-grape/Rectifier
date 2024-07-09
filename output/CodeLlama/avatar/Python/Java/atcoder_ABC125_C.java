public class atcoder_ABC125_C {
    public static int gcd(int a, int b) {
        if (b == 0) {
            return a;
        }
        return gcd(b, a % b);
    }
    public static int[] ruiseki_lr(int[] array) {
        IntBinaryOperator op = (a, b) -> gcd(a, b);
        int e = 0;
        int n = array.length;
        int[] left = new int[n + 1];
        int[] right = new int[n + 1];
        for (int i = 0; i < n; i++) {
            left[i + 1] = op.applyAsInt(left[i], array[i]);
        }
        for (int i = n - 1; i >= 0; i--) {
            right[i] = op.applyAsInt(right[i + 1], array[i]);
        }
        return left;
    }
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int[] a = new int[n];
        for (int i = 0; i < n; i++) {
            a[i] = sc.nextInt();
        }
        int[] left = ruiseki_lr(a);
        int ans = 0;
        for (int i = 0; i < n; i++) {
            ans = Math.max(gcd(left[i], left[i + 1]), ans);
        }
        System.out.println(ans);
    }
}