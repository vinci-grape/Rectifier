import java.util.*;
import java.io.*;

public class atcoder_ABC165_C {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        String[] line = br.readLine().split(" ");
        int N = Integer.parseInt(line[0]);
        int M = Integer.parseInt(line[1]);
        int Q = Integer.parseInt(line[2]);
        int[] a = new int[Q];
        int[] b = new int[Q];
        int[] c = new int[Q];
        int[] d = new int[Q];
        for (int i = 0; i < Q; i++) {
            a[i] = Integer.parseInt(br.readLine());
            b[i] = Integer.parseInt(br.readLine());
            c[i] = Integer.parseInt(br.readLine());
            d[i] = Integer.parseInt(br.readLine());
        }
        solve(N, M, Q, a, b, c, d);
    }

    public static void solve(int N, int M, int Q, int[] a, int[] b, int[] c, int[] d) {
        int res = 0;
        int[] A = new int[N];
        for (int i = 0; i < N; i++) {
            A[i] = i + 1;
        }
        for (int i = 0; i < Q; i++) {
            int last_max = 1;
            if (A.length == 0) {
                res = 0;
                break;
            }
            for (int j = last_max; j <= M; j++) {
                int[] A_new = Arrays.copyOf(A, A.length);
                A_new[A_new.length - 1] = j;
                if (A_new[A_new.length - 1] - A[A_new.length - 2] == c[i]) {
                    A_new[A_new.length - 2] = j;
                    res = Math.max(res, d[i]);
                }
            }
        }
        System.out.println(res);
    }
}