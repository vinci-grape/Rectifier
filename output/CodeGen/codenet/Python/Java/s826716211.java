import java.util.Scanner;
import java.util.List;
import java.util.ArrayList;
import java.util.Arrays;

public class s826716211 {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int n = in.nextInt();
        int m = in.nextInt();
        List<String> S = new ArrayList<String>();
        for (int S_i = 0; S_i < n; S_i++) {
            S.add(in.next());
        }
        List<String> T = new ArrayList<String>();
        for (int T_i = 0; T_i < m; T_i++) {
            T.add(in.next());
        }
        in.close();
        
        int first = n - m + 1;
        int end = n - 1;
        while (first >= 0 && end >= 0) {
            int t_i = 0;
            for (int s_i = first; s_i <= end; s_i++) {
                if (T.get(t_i)!= S.get(s_i) && S.get(s_i)!= '?') {
                    break;
                }
                t_i++;
            }
            if (t_i == m) {
                first--;
                end--;
            }
        }
        
        if (first < 0) {
            System.out.println("UNRESTORABLE");
            return;
        }
        
        String ans = "";
        for (int i = first; i <= end; i++) {
            ans += S.get(i);
        }
        
        ans = ans.replace("?", "a");
        System.out.println(ans);
    }
}