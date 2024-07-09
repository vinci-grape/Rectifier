import java.util.*;
public class codeforces_469_A {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int max_level = sc.nextInt();
        int[] x = new int[max_level];
        int[] y = new int[max_level];
        for (int i = 0; i < max_level; i++) {
            x[i] = sc.nextInt();
        }
        for (int i = 0; i < max_level; i++) {
            y[i] = sc.nextInt();
        }
        Set<Integer> set_x = new HashSet<Integer>();
        Set<Integer> set_y = new HashSet<Integer>();
        for (int i = 0; i < max_level; i++) {
            set_x.add(x[i]);
        }
        for (int i = 0; i < max_level; i++) {
            set_y.add(y[i]);
        }
        if (set_x.contains(0)) {
            set_x.remove(0);
        }
        if (set_y.contains(0)) {
            set_y.remove(0);
        }
        if (set_x.size()!= max_level || set_y.size()!= max_level) {
            System.out.println("Oh, my keyboard!");
        } else {
            System.out.println("I become the guy.");
        }
    }
}