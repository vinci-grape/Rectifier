public class atcoder_ABC123_D {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int x = in.nextInt();
        int y = in.nextInt();
        int z = in.nextInt();
        int k = in.nextInt();
        int[] a = new int[x];
        for(int a_i=0; a_i < x; a_i++) {
            a[a_i] = in.nextInt();
        }
        int[] b = new int[y];
        for(int b_i=0; b_i < y; b_i++) {
            b[b_i] = in.nextInt();
        }
        int[] c = new int[z];
        for(int c_i=0; c_i < z; c_i++) {
            c[c_i] = in.nextInt();
        }
        int[] ab = new int[k];
        for(int ab_i=0; ab_i < k; ab_i++) {
            ab[ab_i] = a[ab_i%x] + b[ab_i/x];
        }
        Arrays.sort(ab, Collections.reverseOrder());
        int[] abc = new int[k];
        for(int abc_i=0; abc_i < k; abc_i++) {
            abc[abc_i] = ab[abc_i] + c[abc_i%z];
        }
        Arrays.sort(abc, Collections.reverseOrder());
        for(int abc_i=0; abc_i < k; abc_i++) {
            System.out.println(abc[abc_i]);
        }
    }
}