import java.util.ArrayList;
import java.util.HashMap;
import java.util.Scanner;

public class s794872785 {
    
    public static void main(String[] args) {
        solve();
    }
    
    public static void solve() {
        int maxsize = 0;
        int maxcnt = 0;
        int ans_num = 0;
        int ans_num2 = 0;
        ArrayList<String> str_v = new ArrayList<>();
        
        Scanner scanner = new Scanner(System.in);
        while (scanner.hasNext()) {
            String in = scanner.next();
            str_v.add(in);
            if (maxsize < in.length()) {
                maxsize = in.length();
                ans_num = str_v.size() - 1;
            }
        }
        
        for (int i = 0; i < str_v.size(); i++) {
            int cnt = 0;
            for (int j = 0; j < str_v.size(); j++) {
                if (str_v.get(i).equals(str_v.get(j))) {
                    cnt++;
                }
            }
            if (maxcnt < cnt) {
                maxcnt = cnt;
                ans_num2 = i;
            }
        }
        
        System.out.println(str_v.get(ans_num2) + " " + str_v.get(ans_num));
    }
    
}