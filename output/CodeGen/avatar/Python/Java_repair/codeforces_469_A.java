import java.util.*;

public class codeforces_469_A {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int max_level = in.nextInt();
        int[] x = new int[max_level];
        for (int i = 0; i < max_level; i++) {
            x[i] = in.nextInt();
        }
        int[] y = new int[max_level];
        for (int i = 0; i < max_level; i++) {
            y[i] = in.nextInt();
        }
        x.pop(0);
        y.pop(0);
        x.remove(0);
        y.remove(0);
        Set<Integer> z = new HashSet<Integer>();
        z.addAll(x);
        z.addAll(y);
        if (z.contains(0)) {
            z.remove(0);
        }
        if (z.size()!= max_level) {
            System.out.println("Oh, my keyboard!");
        } else {
            System.out.println("I become the guy.");
        }
    }
}