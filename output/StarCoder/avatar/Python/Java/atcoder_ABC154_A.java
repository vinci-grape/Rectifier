import java.util.*;
public class atcoder_ABC154_A {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        String S = in.next();
        String T = in.next();
        int A = in.nextInt();
        int B = in.nextInt();
        String U = in.next();
        if (S.equals(U)) {
            A--;
        }
        if (T.equals(U)) {
            B--;
        }
        System.out.println(A + " " + B);
    }
}


