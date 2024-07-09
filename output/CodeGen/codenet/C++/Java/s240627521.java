public class s240627521 {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int n = in.nextInt();
        int[] a = new int[n];
        for (int i = 0; i < n; i++) {
            a[i] = in.nextInt();
        }
        Arrays.sort(a);
        int max = Integer.MIN_VALUE;
        for (int i = 1; i < n; i++) {
            if (max > Math.abs(a[0] - 2 * a[i])) {
                max = Math.abs(a[0] - 2 * a[i]);
                System.out.println(a[0] + " " + a[i]);
            }
        }
    }
}