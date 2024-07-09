public class s360529905 {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int n = in.nextInt();
        int[] a = new int[n];
        int[] b = new int[n];
        for (int i = 0; i < n; i++) {
            a[i] = in.nextInt();
            b[i] = a[i];
        }
        sort(b, b + n);
        int frontHalf = b[n / 2 - 1];
        int backHalf = b[n / 2];
        for (int i = 0; i < n; i++) {
            if (a[i] < backHalf)
                System.out.println(backHalf);
            else
                System.out.println(frontHalf);
        }
    }
}