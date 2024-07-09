import java.util.Scanner;
import java.util.HashMap;
import java.util.Map;
import java.util.Collections;
import java.util.Comparator;
import java.util.ArrayList;
import java.util.List;

public class codeforces_637_A {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        String[] s = sc.nextLine().split(" ");
        Map<String, Integer> w = new HashMap<>();
        for (int i = 0; i < n; i++) {
            if (w.containsKey(s[i])) {
                w.put(s[i], w.get(s[i]) + 1);
            } else {
                w.put(s[i], 1);
            }
        }
        List<String> s1 = new ArrayList<>();
        for (int i = 0; i < n; i++) {
            s1.add(s[i]);
        }
        Collections.sort(s1, new Comparator<String>() {
            @Override
            public int compare(String o1, String o2) {
                if (w.get(o1) > w.get(o2)) {
                    return 1;
                } else if (w.get(o1) < w.get(o2)) {
                    return -1;
                } else {
                    return s1.indexOf(o1) - s1.indexOf(o2);
                }
            }
        });
        System.out.println(s1.get(n - 1));
    }
}