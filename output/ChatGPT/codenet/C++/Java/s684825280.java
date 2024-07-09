import java.util.ArrayList;
import java.util.Collections;
import java.util.List;
import java.util.Scanner;

public class s684825280 {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int n = scanner.nextInt();
        int k = scanner.nextInt();
        List<Integer> a = new ArrayList<>();
        int[] cnt = new int[(int) (1e5 * 2) + 13];

        for (int i = 0; i < n; ++i) {
            int x = scanner.nextInt();
            cnt[x]++;
        }

        for (int i = 0; i < cnt.length; ++i) {
            if (cnt[i] > 0) {
                a.add(cnt[i]);
            }
        }

        int ans = 0;
        Collections.sort(a);
        int m = a.size() - k;

        for (int i = 0; i < m; ++i) {
            ans += a.get(i);
        }

        System.out.println(ans);
    }
}