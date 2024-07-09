import java.util.Scanner;
import java.util.ArrayList;
import java.util.List;

public class s194793609 {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int n = scanner.nextInt();

        List<Long> a = new ArrayList<>();
        for (int i = 0; i < n; i++) {
            a.add(scanner.nextLong());
        }

        List<Long> abs_a = new ArrayList<>(a);
        for (int i = 0; i < n; i++) {
            if (abs_a.get(i) < 0) {
                abs_a.set(i, -abs_a.get(i));
            }
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

        if (num_negative % 2 == 1) {
            ans -= min * 2;
        }

        System.out.println(ans);
    }
}