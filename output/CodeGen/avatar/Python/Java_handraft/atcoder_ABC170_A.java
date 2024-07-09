import java.util.*;

public class atcoder_ABC170_A {
    public static void main(String[] args) {
        int[] a = new int[10];
        Scanner scanner = new Scanner(System.in);
        String[] input = scanner.nextLine().split(" ");
        for (int i = 0; i < input.length; i++) {
            a[i] = Integer.parseInt(input[i]);
        }
        System.out.println(firstMissingPositive(a));
    }
    public static int firstMissingPositive(int[] A) {
        int n = A.length;
        for (int i = 0; i < n; i++) {
            if (A[i] > 0 && A[i] <= n && A[A[i] - 1]!= A[i]) {
                int temp = A[i];
                A[i] = A[temp - 1];
                A[temp - 1] = temp;
            }
        }
        for (int i = 0; i < n; i++) {
            if (A[i]!= i + 1) {
                return i + 1;
            }
        }
        return n + 1;
    }
}