import java.io.*;
import java.util.*;

public class s681105182 {
    public static void main(String[] args) throws Exception {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        StringTokenizer st = new StringTokenizer(br.readLine());
        int N = Integer.parseInt(st.nextToken());
        int[] a = new int[N];
        for (int i = 0; i < N; i++) {
            a[i] = Integer.parseInt(st.nextToken());
        }

        Arrays.sort(a);

        int n = a[N - 1];
        int dif = Integer.MAX_VALUE;
        int prev_dif = dif;
        int r = 0;
        for (int i = 0; i < N - 1; i++) {
            dif = Math.min(Math.abs(n / 2 - a[i]), dif);
            if (dif != prev_dif) {
                r = a[i];
                prev_dif = dif;
            }
        }

        System.out.println(n + " " + r);
    }
}