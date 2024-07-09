import java.util.Scanner;
import java.util.Collections;
import java.util.List;
import java.util.ArrayList;
import java.util.Map;
import java.util.HashMap;
import java.util.Set;
import java.util.HashSet;
import java.util.Iterator;
import java.util.Comparator;
import java.util.TreeMap;
import java.util.TreeSet;

public class s668439281 {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int n = in.nextInt();
        List<String> ls = new ArrayList<String>();
        for (int i = 0; i < n; i++) {
            ls.add(in.next());
        }
        Map<String, Integer> c = new HashMap<String, Integer>();
        for (String s : ls) {
            if (c.containsKey(s)) {
                c.put(s, c.get(s) + 1);
            } else {
                c.put(s, 1);
            }
        }
        List<Map.Entry<String, Integer>> count = new ArrayList<Map.Entry<String, Integer>>(c.entrySet());
        Collections.sort(count, new Comparator<Map.Entry<String, Integer>>() {
            @Override
            public int compare(Map.Entry<String, Integer> o1, Map.Entry<String, Integer> o2) {
                return o2.getValue() - o1.getValue();
            }
        });
        List<String> ans = new ArrayList<String>();
        for (int i = 0; i < count.size(); i++) {
            if (count.get(i).getValue() == 1) {
                ans.add(count.get(i).getKey());
            } else {
                break;
            }
        }
        Collections.sort(ans);
        for (String s : ans) {
            System.out.println(s);
        }
    }
}