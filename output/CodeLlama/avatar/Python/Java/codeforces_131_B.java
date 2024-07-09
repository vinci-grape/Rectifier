import java.util.Scanner;
import java.util.HashMap;
import java.util.Map;
import java.util.Map.Entry;
import java.util.Set;
import java.util.Iterator;

public class codeforces_131_B {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        Map<Integer, Integer> w = new HashMap<Integer, Integer>();
        for (int i = 0; i < n; i++) {
            int x = sc.nextInt();
            if (w.containsKey(x)) {
                w.put(x, w.get(x) + 1);
            } else {
                w.put(x, 1);
            }
        }
        int c = 0;
        Set<Entry<Integer, Integer>> set = w.entrySet();
        Iterator<Entry<Integer, Integer>> it = set.iterator();
        while (it.hasNext()) {
            Map.Entry<Integer, Integer> me = it.next();
            if (me.getKey() == 0) {
                c += me.getValue() * (me.getValue() - 1);
            } else {
                if (w.containsKey(-me.getKey())) {
                    c += me.getValue() * w.get(-me.getKey());
                }
            }
        }
        System.out.println(c / 2);
    }
}