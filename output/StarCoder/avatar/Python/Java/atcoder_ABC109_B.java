import java.util.*;
public class atcoder_ABC109_B {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        Map<String, Integer> s = new HashMap<String, Integer>();
        List<String> l = new ArrayList<String>();
        for (int i = 0; i < n; i++) {
            l.add(sc.next());
        }
        String f = "Yes";
        int i = -1;
        for (String v : l) {
            if (s.containsKey(v)) {
                s.put(v, s.get(v) + 1);
            } else {
                s.put(v, 1);
            }
            if (s.get(v) >= 2) {
                f = "No";
            }
            if (i!= -1 && l.get(i).charAt(l.get(i).length() - 1)!= v.charAt(0)) {
                f = "No";
            }
            i++;
        }
        System.out.println(f);
    }
}