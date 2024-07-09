import java.util.*;

public class atcoder_ABC123_D {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int x = in.nextInt();
        int y = in.nextInt();
        int z = in.nextInt();
        int k = in.nextInt();
        long[] a = new long[x];
        for(int a_i=0; a_i < x; a_i++) {
            a[a_i] = in.nextLong();
        }
        long[] b = new long[y];
        for(int b_i=0; b_i < y; b_i++) {
            b[b_i] = in.nextLong();
        }
        long[] c = new long[z];
        for(int c_i=0; c_i < z; c_i++) {
            c[c_i] = in.nextLong();
        }
        List<Long> ab = new ArrayList<>();
        for (int i = 0; i < x; i++) {
            for (int j = 0; j < y; j++) {
                ab.add(a[i] + b[j]);
            }
        }
        Collections.sort(ab, Collections.reverseOrder());
        List<Long> abc = new ArrayList<>();
        for (int i = 0; i < Math.min(k, x * y); i++) {
            for (int j = 0; j < z; j++) {
                abc.add(ab.get(i) + c[j]);
            }
        }
        Collections.sort(abc, Collections.reverseOrder());
        for(int abc_i=0; abc_i < k; abc_i++) {
            System.out.println(abc.get(abc_i));
        }
    }
}