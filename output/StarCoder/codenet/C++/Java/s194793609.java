import java.util.Scanner;
import java.util.Vector;

public class s194793609 {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();

        Vector<Long> a = new Vector<Long>(n);
        for (int i = 0; i < n; i++) {
            a.add(sc.nextLong());
        }

        Vector<Long> abs_a = new Vector<Long>(n);
        for (int i = 0; i < n; i++) {
            abs_a.add(Math.abs(a.get(i)));
        }

        long ans = 0;
        long min = abs_a.get(0);
        for (long e : abs_a) {
            ans += e;
            if (min > e) {
                min = e;
            }
        }
        int num_negative = 0;
        for (long e : a) {
            if (e < 0) {
                num_negative++;
            }
        }

        if (num_negative % 2) {
            ans -= min * 2;
        }

        System.out.println(ans);
    }
}