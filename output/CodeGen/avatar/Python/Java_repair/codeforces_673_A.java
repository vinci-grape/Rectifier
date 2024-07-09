import java.util.*;

public class codeforces_673_A {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int[] A = sc.nextInt().split();
        int sum = 0;
        for (int i = 0; i < A.length; i++) {
            sum += A[i];
        }
        if (sum > 15) {
            return;
        }
        int max = 0;
        for (int i = 0; i < A.length; i++) {
            if (A[i] > max) max = A[i];
        }
        if (max == 90 || max + 15 >= 90) {
            return;
        }
        int min = 0;
        for (int i = 0; i < n; i++) {
            if (A[i] < min) min = A[i];
        }
        int sum2 = 0;
        for (int i = 0; i < A.length; i++) {
            sum2 += A[i];
        }
        if (sum2 - min > 15) {
            return;
        }
        int max2 = 0;
        for (int i = 0; i < A.length; i++) {
            if (A[i] > max2) max2 = A[i];
        }
        return max2 + 15;
    }
}