import java.util.Scanner;
import java.util.Vector;
import java.util.Arrays;
public class s847126533 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        while (sc.hasNextInt()) {
            int m = sc.nextInt();
            int n = sc.nextInt();
            Vector<Integer> book = new Vector<Integer>();
            for (int i = 0; i < n; i++) {
                int tmp = sc.nextInt();
                book.add(tmp);
            }
            int l = 0;
            int r = 1500000;
            int ans = 0;
            while (l < r) {
                if (check(m, (l + r) / 2, book)) {
                    ans = (l + r) / 2;
                    if (r == (l + r) / 2)
                        break;
                    r = (l + r) / 2;
                } else {
                    if (l == (l + r) / 2)
                        break;
                    l = (l + r) / 2;
                }
            }
            System.out.println(ans);
        }
    }

    public static boolean check(int n, int wei, Vector<Integer> book) {
        int tmp = wei;
        n--;
        for (int i = 0; i < book.size(); i++) {
            if (tmp < book.get(i)) {
                if (n > 0) {
                    n--;
                    tmp = wei;
                    if (tmp < book.get(i))
                        return false;
                } else
                    return false;
            }
            tmp -= book.get(i);
        }
        return true;
    }
}