import java.util.*;

public class atcoder_ABC150_C {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int n = scanner.nextInt();
        int[] p = new int[n];
        int[] q = new int[n];
        for (int i = 0; i < n; i++) {
            p[i] = scanner.nextInt();
        }
        for (int i = 0; i < n; i++) {
            q[i] = scanner.nextInt();
        }
        System.out.println(findPermutation(n, p, q));
    }
    public static int findPermutation(int n, int[] p, int[] q) {
        int[] orig = new int[n];
        for (int i = 0; i < n; i++) {
            orig[i] = i + 1;
        }
        int pn = Arrays.binarySearch(orig, p);
        int qn = Arrays.binarySearch(orig, q);
        return Math.abs(pn - qn);
    }
}