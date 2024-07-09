import java.util.Scanner;
import java.util.Vector;
public class s064900223 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        Vector<Integer> p = new Vector<Integer>();
        for (int i = 0; i < n; i++) {
            p.add(sc.nextInt());
        }
        int ans = 0;
        for (int i = 0; i < n - 1; i++) {
            if (p.get(i) == i + 1) {
                p.set(i + 1, p.get(i));
                ans += 1;
            }
        }
        if (p.get(n - 1) == n) {
            ans += 1;
        }
        System.out.println(ans);
    }
}