import java.util.Collections;
import java.util.HashMap;
import java.util.List;
import java.util.Map;
import java.util.Scanner;
import java.util.Set;

public class atcoder_ABC110_C {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        String s = in.next();
        String t = in.next();
        String result = run(s, t);
        System.out.println(result);
    }

    public static String run(String s, String t) {
        String[] ss = s.split(" ");
        String[] tt = t.split(" ");
        if (ss.length == tt.length) {
            Map<String, Integer> map = new HashMap<>();
            for (int i = 0; i < ss.length; i++) {
                map.put(ss[i], map.getOrDefault(ss[i], 0) + 1);
            }
            for (int i = 0; i < tt.length; i++) {
                if (map.containsKey(tt[i])) {
                    map.put(tt[i], map.get(tt[i]) - 1);
                }
            }
            Set<Map.Entry<String, Integer>> entrySet = map.entrySet();
            List<Map.Entry<String, Integer>> list = Collections.list(entrySet.iterator());
            Collections.sort(list, (a, b) -> b.getValue() - a.getValue());
            if (list.get(0).getValue() == 0) {
                return "Yes";
            } else {
                return "No";
            }
        } else {
            return "No";
        }
    }
}