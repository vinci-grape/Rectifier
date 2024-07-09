public class s447383972 {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int n = in.nextInt();
        int[] a = new int[n];
        for (int i = 0; i < n; i++) {
            a[i] = in.nextInt();
        }
        int[] q = new int[n];
        int tot = 0;
        for (int i = 1; i < n; i++) {
            if (a[i] == a[i + 1]) {
                q[++tot] = a[i];
                i++;
            }
        }
        System.out.println(q[tot] * q[tot - 1]);
    }
}