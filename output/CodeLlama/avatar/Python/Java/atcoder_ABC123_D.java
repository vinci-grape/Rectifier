import java.util.Scanner;

public class atcoder_ABC123_D {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int x = sc.nextInt();
        int y = sc.nextInt();
        int z = sc.nextInt();
        int k = sc.nextInt();
        int[] a = new int[x];
        int[] b = new int[y];
        int[] c = new int[z];
        for (int i = 0; i < x; i++) {
            a[i] = sc.nextInt();
        }
        for (int i = 0; i < y; i++) {
            b[i] = sc.nextInt();
        }
        for (int i = 0; i < z; i++) {
            c[i] = sc.nextInt();
        }
        int[] ab = new int[x * y];
        for (int i = 0; i < x; i++) {
            for (int j = 0; j < y; j++) {
                ab[i * y + j] = a[i] + b[j];
            }
        }
        int[] abc = new int[k];
        for (int i = 0; i < k; i++) {
            abc[i] = ab[i] + c[i];
        }
        for (int i = 0; i < k; i++) {
            System.out.println(abc[i]);
        }
    }
}