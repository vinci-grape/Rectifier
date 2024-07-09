import java.util.Scanner;
import java.util.ArrayList;
import java.util.List;

public class s569774535 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        List<Integer> a = new ArrayList<>();
        for (int i = 0; i < n; i++) {
            a.add(sc.nextInt());
        }

        int ans = 0;
        boolean ok = true;
        while (ok) {
            for (int i = 0; i < n; i++) {
                if (a.get(i) % 2 == 1) {
                    System.out.println(ans);
                    return;
                } else {
                    a.set(i, a.get(i) / 2);
                }
            }
            ans++;
        }

        System.out.println(ans);
    }
}