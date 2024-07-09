import java.util.*;
import java.io.*;

public class s681105182 {
    public static void main(String[] args) {
        new s681105182().main();
    }

    public void main() {
        Scanner sc = new Scanner(System.in);

        int N = sc.nextInt();
        int[] a_li = new int[N];
        for (int i = 0; i < N; i++) {
            a_li[i] = sc.nextInt();
        }

        Arrays.sort(a_li);

        int n = a_li[N - 1];

        int dif = Integer.MAX_VALUE;
        int prev_dif = dif;
        for (int a : a_li) {
            dif = Math.min(Math.abs(n / 2 - a), dif);
            if (dif!= prev_dif) {
                int r = a;
                prev_dif = dif;
            }
        }

        System.out.println(n + " " + r);
    }
}