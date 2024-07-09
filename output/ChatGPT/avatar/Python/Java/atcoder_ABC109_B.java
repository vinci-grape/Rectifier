import java.util.HashMap;
import java.util.Map;
import java.util.Scanner;

public class atcoder_ABC109_B {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int n = input.nextInt();
        Map<String, Integer> s = new HashMap<>();
        String[] l = new String[n];
        for (int i = 0; i < n; i++) {
            l[i] = input.next();
        }
        String f = "Yes";
        int i = -1;
        for (String v : l) {
            if (!s.containsKey(v)) {
                s.put(v, 0);
            }
            s.put(v, s.get(v) + 1);
            if (s.get(v) >= 2) {
                f = "No";
            }
            if (i != -1 && !l[i].substring(l[i].length() - 1).equals(v.substring(0, 1))) {
                f = "No";
            }
            i += 1;
        }
        System.out.println(f);
    }
}