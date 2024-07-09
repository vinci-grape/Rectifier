import java.util.Scanner;
import java.util.HashMap;
import java.util.Map;
import java.util.Set;
import java.util.Iterator;
import java.util.ArrayList;

public class s622795537 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        Map<String, Integer> arr = new HashMap<>();

        for (int i = 0; i < n; i++) {
            String s = sc.next();
            if (!arr.containsKey(s)) {
                arr.put(s, 1);
            } else {
                arr.put(s, arr.get(s) + 1);
            }
        }

        int max_count = 0;
        for (Map.Entry<String, Integer> entry : arr.entrySet()) {
            if (entry.getValue() > max_count) {
                max_count = entry.getValue();
            }
        }

        ArrayList<String> dic = new ArrayList<>();
        for (Map.Entry<String, Integer> entry : arr.entrySet()) {
            if (entry.getValue() == max_count) {
                dic.add(entry.getKey());
            }
        }

        for (int i = 0; i < dic.size(); i++) {
            System.out.println(dic.get(i));
        }
    }
}