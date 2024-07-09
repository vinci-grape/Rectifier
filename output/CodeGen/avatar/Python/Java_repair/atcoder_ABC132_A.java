import java.util.*;

public class atcoder_ABC132_A {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int n = in.nextInt();
        String S = in.next();
        int[] c = new int[128];
        Set<Character> Sa = new HashSet<Character>();
        for (int i = 0; i < n; i++) {
            Sa.add(S.charAt(i));
        }
        if (Sa.size()!= 2) {
            System.out.println("No");
            return;
        }
        for (Character c1 : Sa) {
            c[c1]++;
        }
        for (Character c2 : Sa) {
            if (c[c2]!= 2) {
                System.out.println("No");
                return;
            }
        }
        System.out.println("Yes");
    }
}