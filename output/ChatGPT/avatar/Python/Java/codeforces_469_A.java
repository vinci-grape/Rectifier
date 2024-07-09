import java.util.HashSet;
import java.util.Scanner;

public class codeforces_469_A {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int max_level = scanner.nextInt();
        int[] x = new int[max_level];
        int[] y = new int[max_level];
        
        for (int i = 0; i < max_level; i++) {
            x[i] = scanner.nextInt();
        }
        for (int i = 0; i < max_level; i++) {
            y[i] = scanner.nextInt();
        }
        
        HashSet<Integer> xSet = new HashSet<>();
        HashSet<Integer> ySet = new HashSet<>();
        
        for (int i = 0; i < max_level; i++) {
            if (x[i] != 0) {
                xSet.add(x[i]);
            }
            if (y[i] != 0) {
                ySet.add(y[i]);
            }
        }
        
        xSet.remove(0);
        ySet.remove(0);
        
        HashSet<Integer> z = new HashSet<>(xSet);
        z.addAll(ySet);
        
        if (z.size() != max_level) {
            System.out.println("Oh, my keyboard!");
        } else {
            System.out.println("I become the guy.");
        }
    }
}