import java.util.*;

public class s622795537 {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        HashMap<String, Integer> map = new HashMap<String, Integer>();
        for (int i = 0; i < n; i++) {
            String s = sc.next();
            if (!map.containsKey(s)) {
                map.put(s, 1);
            } else {
                map.put(s, map.get(s) + 1);
            }
        }
        int max = 0;
        for (String key : map.keySet()) {
            if (map.get(key) > max) {
                max = map.get(key);
            }
        }
        ArrayList<String> list = new ArrayList<String>();
        for (String key : map.keySet()) {
            if (map.get(key) == max) {
                list.add(key);
            }
        }
        Collections.sort(list);
        for (String s : list) {
            System.out.println(s);
        }
    }
}