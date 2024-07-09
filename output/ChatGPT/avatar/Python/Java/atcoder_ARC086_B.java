import java.util.*;
import java.io.*;
import java.lang.*;

public class atcoder_ARC086_B {
    static int N;
    static int[] a;
    static int max_val;
    static int max_sign;
    static int max_index;
    static final int mod = (int) (1e9 + 7);

    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        N = Integer.parseInt(br.readLine());
        a = new int[N];
        String[] input = br.readLine().split(" ");
        for (int i = 0; i < N; i++) {
            a[i] = Integer.parseInt(input[i]);
        }
        max_val = 0;
        max_sign = 0;
        max_index = -1;
        for (int i = 0; i < N; i++) {
            if (Math.abs(a[i]) > max_val) {
                max_val = Math.abs(a[i]);
                max_sign = my_sign(a[i]);
                max_index = i;
            }
        }
        if (max_sign == 0) {
            System.out.println(0);
        } else if (max_sign == 1) {
            System.out.println(2 * N - 1);
            for (int i = 0; i < N; i++) {
                System.out.println((max_index + 1) + " " + (i + 1));
            }
            for (int i = 0; i < N - 1; i++) {
                System.out.println((i + 1) + " " + (i + 2));
            }
        } else {
            System.out.println(2 * N - 1);
            for (int i = 0; i < N; i++) {
                System.out.println((max_index + 1) + " " + (i + 1));
            }
            for (int i = N - 1; i >= 1; i--) {
                System.out.println((i + 1) + " " + i);
            }
        }
    }

    static int my_sign(int x) {
        return (x > 0) ? 1 : ((x < 0) ? -1 : 0);
    }
}