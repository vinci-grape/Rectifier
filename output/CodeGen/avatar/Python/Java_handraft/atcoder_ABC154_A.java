import java.util.*;

public class atcoder_ABC154_A {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        String S = in.next();
        String T = in.next();
        int A = in.nextInt();
        int B = in.nextInt();
        String U = in.next();
        solve(S, T, A, B, U);
    }

    public static void solve(String S, String T, int A, int B, String U) {
        if (S.equals(U)) {
            A -= 1;
        }
        if (T.equals(U)) {
            B -= 1;
        }
        System.out.println(A + " " + B);
    }
}