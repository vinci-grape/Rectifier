public class s681105182 {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int n = in.nextInt();
        int[] a = new int[n];
        for (int a_i = 0; a_i < n; a_i++) {
            a[a_i] = in.nextInt();
        }
        Arrays.sort(a);
        int nn = a[n - 1];
        int r = a[0];
        int dif = Integer.MAX_VALUE;
        int prev_dif = dif;
        for (int a_i = 0; a_i < n - 1; a_i++) {
            dif = Math.min(Math.abs(nn / 2 - a[a_i]), dif);
            if (dif!= prev_dif) {
                r = a[a_i];
                prev_dif = dif;
            }
        }
        System.out.println(nn + " " + r);
    }
}