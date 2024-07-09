import java.util.*;
public class atcoder_ABC109_B {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        String[] l = new String[n];
        for (int i = 0; i < n; i++) {
            l[i] = sc.next();
        }
        boolean f = true;
        for (int i = 0; i < n - 1; i++) {
            if (l[i].charAt(l[i].length() - 1) != l[i + 1].charAt(0)) {
                f = false;
                break;
            }
        }
        System.out.println(f ? "Yes" : "No");
    }
}