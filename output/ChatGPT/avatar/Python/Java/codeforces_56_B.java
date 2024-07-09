import java.util.Scanner;

public class codeforces_56_B {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int N = scanner.nextInt();
        int[] A = new int[N];
        for (int i = 0; i < N; i++) {
            A[i] = scanner.nextInt();
        }
        int mn = N + 1, mx = -1;
        for (int i = 0; i < N; i++) {
            if (i + 1 != A[i]) {
                mn = Math.min(mn, i);
                mx = Math.max(mx, i);
            }
        }
        if (mx == -1) {
            System.out.println("0 0");
        } else {
            int[] temp = new int[mx - mn + 1];
            for (int i = 0; i < temp.length; i++) {
                temp[i] = A[mx - i];
            }
            for (int i = mn; i <= mx; i++) {
                A[i] = temp[i - mn];
            }
            boolean sorted = true;
            for (int i = 1; i < N; i++) {
                if (A[i] < A[i - 1]) {
                    sorted = false;
                    break;
                }
            }
            if (sorted) {
                System.out.println((mn + 1) + " " + (mx + 1));
            } else {
                System.out.println("0 0");
            }
        }
    }
}