import java.util.*;
public class codeforces_400_B {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int m = sc.nextInt();
        Set<Integer> c = new HashSet<Integer>();
        for (int i = 0; i < n; i++) {
            String s = sc.next();
            c.add(s.indexOf("S") - s.indexOf("G"));
        }
        System.out.println(c.contains(-1)? -1 : c.size());
    }
}