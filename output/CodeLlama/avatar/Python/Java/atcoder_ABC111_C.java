import java.util.*;
public class atcoder_ABC111_C {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int[] x = new int[n];
        ArrayList<Integer> a = new ArrayList<>();
        ArrayList<Integer> b = new ArrayList<>();
        for (int i = 0; i < n; i++) {
            x[i] = sc.nextInt();
            if (i % 2 == 0) {
                a.add(x[i]);
            } else {
                b.add(x[i]);
            }
        }
        int[] cnta = new int[100002];
        int[] cntb = new int[100002];
        int vala = 0;
        int vala1 = 0;
        int maxCnta = 0;
        int maxCnta1 = 0;
        for (int i = 0; i < n; i++) {
            cnta[a.get(i)]++;
        }
        for (int i = 0; i < n; i++) {
            if (maxCnta < cnta[a.get(i)]) {
                vala = a.get(i);
                maxCnta = cnta[a.get(i)];
            }
        }
        for (int i = 0; i < n; i++) {
            if (maxCnta1 < cnta[a.get(i)] && vala != a.get(i)) {
                maxCnta1 = cnta[a.get(i)];
                vala1 = a.get(i);
            }
        }
        int valb = 0;
        int valb1 = 0;
        int maxCntb = 0;
        int maxCntb1 = 0;
        for (int i = 0; i < n; i++) {
            cntb[b.get(i)]++;
        }
        for (int i = 0; i < n; i++) {
            if (maxCntb < cntb[b.get(i)]) {
                valb = b.get(i);
                maxCntb = cntb[b.get(i)];
            }
        }
        for (int i = 0; i < n; i++) {
            if (maxCntb1 < cntb[b.get(i)] && valb != b.get(i)) {
                maxCntb1 = cntb[b.get(i)];
                valb1 = b.get(i);
            }
        }
        if (valb != vala) {
            int res = 0;
            for (int i = 0; i < n; i++) {
                if (x[i] != vala) {
                    res++;
                }
            }
            for (int i = 0; i < n; i++) {
                if (x[i] != valb) {
                    res++;
                }
            }
            System.out.println(res);
        } else {
            int resa = 0;
            int resb = 0;
            int resa1 = 0;
            int resb1 = 0;
            for (int i = 0; i < n; i++) {
                if (x[i] != vala) {
                    resa++;
                }
                if (x[i] != vala1) {
                    resa1++;
                }
            }
            for (int i = 0; i < n; i++) {
                if (x[i] != valb) {
                    resb++;
                }
                if (x[i] != valb1) {
                    resb1++;
                }
            }
            System.out.println(Math.min(resa + resb1, resa1 + resb));
        }
    }
}