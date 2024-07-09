import java.util.Scanner;

public class codeforces_56_B {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int N = sc.nextInt();
        int[] A = new int[N];
        for (int i = 0; i < N; i++) {
            A[i] = sc.nextInt();
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
            A = Arrays.copyOfRange(A, 0, mn);
            A = Arrays.copyOfRange(A, mn, mx + 1);
            A = Arrays.copyOfRange(A, 0, A.length);
            if (Arrays.equals(A, Arrays.stream(A).sorted().toArray())) {
                System.out.println(mn + 1 + " " + mx + 1);
            } else {
                System.out.println("0 0");
            }
        }
    }
}