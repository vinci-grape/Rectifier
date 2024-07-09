import java.util.*;
public class atcoder_ABC111_C {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int[] x = new int[n];
        for (int i = 0; i < n; i++) {
            x[i] = sc.nextInt();
        }
        int[] a = new int[n / 2];
        int[] b = new int[n / 2];
        for (int i = 0; i < n; i++) {
            if (i % 2 == 0) {
                a[i / 2] = x[i];
            } else {
                b[i / 2] = x[i];
            }
        }
        int[] cnta = new int[100002];
        int[] cntb = new int[100002];
        int vala = 0;
        int vala1 = 0;
        int maxCnta = 0;
        int maxCnta1 = 0;
        for (int i = 0; i < n / 2; i++) {
            cnta[a[i]]++;
        }
        for (int i = 0; i < n / 2; i++) {
            if (maxCnta < cnta[a[i]]) {
                vala = a[i];
                maxCnta = cnta[a[i]];
            }
        }
        for (int i = 0; i < n / 2; i++) {
            if (maxCnta1 < cnta[a[i]] && vala!= a[i]) {
                maxCnta1 = cnta[a[i]];
                vala1 = a[i];
            }
        }
        int valb = 0;
        int valb1 = 0;
        int maxCntb = 0;
        int maxCntb1 = 0;
        for (int i = 0; i < n / 2; i++) {
            cntb[b[i]]++;
        }
        for (int i = 0; i < n / 2; i++) {
            if (maxCntb < cntb[b[i]]) {
                valb = b[i];
                maxCntb = cntb[b[i]];
            }
        }
        for (int i = 0; i < n / 2; i++) {
            if (maxCntb1 < cntb[b[i]] && valb!= b[i]) {
                maxCntb1 = cntb[b[i]];
                valb1 = b[i];
            }
        }
        if (valb!= vala) {
            int res = 0;
            for (int i = 0; i < n / 2; i++) {
                if (a[i]!= vala) {
                    res++;
                }
            }
            for (int i = 0; i < n / 2; i++) {
                if (b[i]!= valb) {
                    res++;
                }
            }
            System.out.println(res);
        } else {
            int resa = 0;
            int resb = 0;
            int resa1 = 0;
            int resb1 = 0;
            for (int i = 0; i < n / 2; i++) {
                if (a[i]!= vala) {
                    resa++;
                }
                if (a[i]!= vala1) {
                    resa1++;
                }
            }
            for (int i = 0; i < n / 2; i++) {
                if (b[i]!= valb) {
                    resb++;
                }
                if (b[i]!= valb1) {
                    resb1++;
                }
            }
            System.out.println(Math.min(resa + resb1, resa1 + resb));
        }
    }
}