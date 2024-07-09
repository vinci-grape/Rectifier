public class s777789287 {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int n = in.nextInt();
        int m = in.nextInt();
        int[] a = new int[n];
        for (int i = 0; i < n; i++) {
            a[i] = in.nextInt();
        }
        a = sort(a, n, m);
        int s = sum(a, n, m) / (4 * m);
        if (a[m - 1] >= s) {
            System.out.println("Yes");
        } else {
            System.out.println("No");
        }
    }
    private static int[] sort(int[] a, int n, int m) {
        for (int i = 0; i < m; i++) {
            int temp = a[i];
            a[i] = a[n - i - 1];
            a[n - i - 1] = temp;
        }
        return a;
    }
    private static int sum(int[] a, int n, int m) {
        int sum = 0;
        for (int i = 0; i < m; i++) {
            sum += a[i];
        }
        return sum;
    }
}