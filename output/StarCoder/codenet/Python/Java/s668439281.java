import java.util.*;

public class s668439281 {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        String[] ls = new String[n];
        for (int i = 0; i < n; i++) {
            ls[i] = sc.next();
        }
        Map<String, Integer> c = new HashMap<String, Integer>();
        for (int i = 0; i < n; i++) {
            if (c.containsKey(ls[i])) {
                c.put(ls[i], c.get(ls[i]) + 1);
            } else {
                c.put(ls[i], 1);
            }
        }
        int count = c.values().stream().max(Comparator.naturalOrder()).get();
        List<String> ans = new ArrayList<String>();
        for (String key : c.keySet()) {
            if (c.get(key) == count) {
                ans.add(key);
            }
        }
        Collections.sort(ans);
        for (String s : ans) {
            System.out.println(s);
        }
    }
}