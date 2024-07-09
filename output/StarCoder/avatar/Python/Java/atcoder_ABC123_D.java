import java.util.*;
public class atcoder_ABC123_D {

    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        int x = scan.nextInt();
        int y = scan.nextInt();
        int z = scan.nextInt();
        int k = scan.nextInt();
        int[] a = new int[x];
        int[] b = new int[y];
        int[] c = new int[z];
        for(int i = 0; i < x; i++) {
            a[i] = scan.nextInt();
        }
        for(int i = 0; i < y; i++) {
            b[i] = scan.nextInt();
        }
        for(int i = 0; i < z; i++) {
            c[i] = scan.nextInt();
        }
        Arrays.sort(a);
        Arrays.sort(b);
        Arrays.sort(c);
        int[] ab = new int[x*y];
        for(int i = 0; i < x; i++) {
            for(int j = 0; j < y; j++) {
                ab[i*y+j] = a[i] + b[j];
            }
        }
        Arrays.sort(ab);
        int[] abc = new int[k];
        for(int i = 0; i < k; i++) {
            abc[i] = ab[i];
        }
        for(int i = 0; i < k; i++) {
            for(int j = 0; j < z; j++) {
                abc[i] += c[j];
            }
        }
        Arrays.sort(abc);
        for(int i = 0; i < k; i++) {
            System.out.println(abc[i]);
        }
    }
}