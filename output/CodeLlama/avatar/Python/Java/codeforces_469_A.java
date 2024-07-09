import java.util.*;
import java.io.*;
import java.lang.*;

public class codeforces_469_A {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int max_level = sc.nextInt();
        int[] x = new int[sc.nextInt()];
        int[] y = new int[sc.nextInt()];
        for (int i = 0; i < x.length; i++) {
            x[i] = sc.nextInt();
        }
        for (int i = 0; i < y.length; i++) {
            y[i] = sc.nextInt();
        }
        HashSet<Integer> set1 = new HashSet<Integer>();
        HashSet<Integer> set2 = new HashSet<Integer>();
        for (int i = 0; i < x.length; i++) {
            set1.add(x[i]);
        }
        for (int i = 0; i < y.length; i++) {
            set2.add(y[i]);
        }
        if (set1.contains(0)) {
            set1.remove(0);
        } else if (set2.contains(0)) {
            set2.remove(0);
        }
        HashSet<Integer> set3 = new HashSet<Integer>(set1);
        set3.addAll(set2);
        if (set3.size() != max_level) {
            System.out.println("Oh, my keyboard!");
        } else {
            System.out.println("I become the guy.");
        }
    }
}