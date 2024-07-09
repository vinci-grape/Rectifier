import java.util.Scanner;
import java.util.Vector;

public class s194793609 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        Vector<Long> a = new Vector<Long>();
        for (int i = 0; i < n; i++) {
            a.add(sc.nextLong());
        }

        Vector<Long> abs_a = a;

        for (int i = 0; i < n; i++) {
            if (abs_a.get(i) < 0) {
                abs_a.set(i, -abs_a.get(i));
            }
        }

        long ans = 0;
        long min = abs_a.get(0);
        for (int i = 0; i < n; i++) {
            ans += abs_a.get(i);
            if (min > abs_a.get(i)) {
                min = abs_a.get(i);
            }
        }
        int num_negative = 0;
        for (int i = 0; i < n; i++) {
            if (a.get(i) < 0) {
                num_negative++;
            }
        }

        if (num_negative % 2) {
            ans -= min * 2;
        }

        System.out.println(ans);
    }
}