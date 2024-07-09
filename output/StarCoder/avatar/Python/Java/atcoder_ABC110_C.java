import java.util.HashMap;
import java.util.Map;
import java.util.Scanner;
public class atcoder_ABC110_C {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String s = sc.next();
        String t = sc.next();
        System.out.println(run(s, t));
    }

    public static String run(String s, String t) {
        Map<Character, Integer> map = new HashMap<>();
        for (char c : s.toCharArray()) {
            map.put(c, map.getOrDefault(c, 0) + 1);
        }
        for (char c : t.toCharArray()) {
            map.put(c, map.getOrDefault(c, 0) - 1);
        }
        for (int v : map.values()) {
            if (v!= 0) {
                return "No";
            }
        }
        return "Yes";
    }
}