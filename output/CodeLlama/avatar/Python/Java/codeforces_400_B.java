import java.util.Scanner;
import java.util.HashSet;
import java.util.Set;

public class codeforces_400_B {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int m = sc.nextInt();
        Set<Integer> c = new HashSet<>();
        for (int i = 0; i < n; i++) {
            String s = sc.next();
            int a = s.indexOf("S") - s.indexOf("G");
            c.add(a);
        }
        if (c.contains(-1)) {
            System.out.println(-1);
        } else {
            System.out.println(c.size());
        }
    }
}