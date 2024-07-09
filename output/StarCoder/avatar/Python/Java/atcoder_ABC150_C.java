import java.util.Scanner;
import java.util.ArrayList;
import java.util.List;
import java.util.Arrays;

public class atcoder_ABC150_C {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        List<List<Integer>> orig = new ArrayList<List<Integer>>();
        for (int i = 0; i < n; i++) {
            List<Integer> l = new ArrayList<Integer>();
            for (int j = 0; j < n; j++) {
                l.add(j + 1);
            }
            orig.add(l);
        }
        int[] p = new int[n];
        int[] q = new int[n];
        for (int i = 0; i < n; i++) {
            p[i] = sc.nextInt();
            q[i] = sc.nextInt();
        }
        int pn = orig.indexOf(Arrays.asList(p));
        int qn = orig.indexOf(Arrays.asList(q));
        System.out.println(Math.abs(pn - qn));
    }
}