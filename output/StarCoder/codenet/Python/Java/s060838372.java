import java.util.*;
public class s060838372 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int N = sc.nextInt();
        int K = sc.nextInt();
        String S = sc.next();
        if (S.charAt(K - 1) == 'A') {
            S = S.substring(0, K - 1) + "a" + S.substring(K);
        } else if (S.charAt(K - 1) == 'B') {
            S = S.substring(0, K - 1) + "b" + S.substring(K);
        } else {
            S = S.substring(0, K - 1) + "c" + S.substring(K);
        }
        System.out.println(S);
    }
}