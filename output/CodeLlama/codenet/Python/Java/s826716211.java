import java.util.*;

public class s826716211 {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String S_d = sc.nextLine();
        String T = sc.nextLine();

        int end = S_d.length() - 1;
        int first = end - T.length() + 1;
        while (first >= 0) {
            int t_i = 0;
            for (int s_i = first; s_i <= end; s_i++) {
                if (T.charAt(t_i) != S_d.charAt(s_i) && S_d.charAt(s_i) != '?') {
                    break;
                }
                t_i++;
            }
            if (t_i == T.length()) {
                break;
            }
            first--;
            end--;
        }

        if (first < 0) {
            System.out.println("UNRESTORABLE");
            return;
        }

        StringBuilder ans = new StringBuilder(S_d);
        int t_i = 0;
        for (int i = first; i <= end; i++) {
            ans.setCharAt(i, T.charAt(t_i));
            t_i++;
        }

        System.out.println(ans.toString().replace("?", "a"));
    }
}