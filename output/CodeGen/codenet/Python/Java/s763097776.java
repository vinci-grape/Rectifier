public class s763097776 {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int n = in.nextInt();
        int[] p = new int[n];
        for (int p_i = 0; p_i < n; p_i++) {
            p[p_i] = in.nextInt();
        }
        in.close();
        Arrays.sort(p);
        int count = 0;
        for (int i = 0; i < n; i++) {
            if (p[i]!= p[i]) {
                count++;
            }
        }
        if (count == 0 || count == 2) {
            System.out.println("YES");
        } else {
            System.out.println("NO");
        }
    }
}