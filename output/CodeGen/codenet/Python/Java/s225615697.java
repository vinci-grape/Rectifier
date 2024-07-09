public class s225615697 {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int n = in.nextInt();
        int[] a = new int[n];
        for (int a_i = 0; a_i < n; a_i++) {
            a[a_i] = in.nextInt();
        }
        int m1 = 0;
        for (int i = 0; i < n; i++) {
            m1 += a[i] * (-1) * Math.pow(2, i);
        }
        m1 /= 2;
        System.out.println(m1);
        int[] m = new int[n];
        m[0] = m1;
        for (int i = 1; i < n; i++) {
            m[i] = a[i - 1] - m[i - 1];
        }
        StringBuilder sb = new StringBuilder();
        for (int i = 0; i < n; i++) {
            sb.append(m[i] * 2);
        }
        System.out.println(sb.toString());
    }
}