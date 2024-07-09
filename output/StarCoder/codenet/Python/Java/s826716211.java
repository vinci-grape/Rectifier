import java.util.*;

public class s826716211 {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String S_d = sc.next();
        String T = sc.next();

        int end = S_d.length() - 1;
        int first = end - T.length() + 1;
        while (first >= 0) {
            int t_i = 0;
            for (int s_i = first; s_i <= end; s_i++) {
                if (T.charAt(t_i)!= S_d.charAt(s_i) && S_d.charAt(s_i)!= '?') {
                    break;
                }
                t_i++;
            } else {
                break;
            }

            first--;
            end--;
        } else {
            System.out.println("UNRESTORABLE");
            return;
        }

        StringBuilder ans = new StringBuilder();
        for (int i = first; i <= end; i++) {
            ans.append(T.charAt(i - first));
        }
        ans.replace(ans.indexOf("?"), ans.indexOf("?") + 1, "a");
        System.out.println(ans);
    }
}