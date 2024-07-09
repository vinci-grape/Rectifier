import java.util.Scanner;
import java.util.HashMap;
import java.util.Map;
import java.util.Map.Entry;
import java.util.Collections;
import java.util.Comparator;
import java.util.ArrayList;
import java.util.List;
import java.util.Arrays;

public class atcoder_ABC124_C {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String s = sc.nextLine();
        Map<String, Integer> even = new HashMap<>();
        Map<String, Integer> odd = new HashMap<>();
        for (int i = 0; i < s.length(); i += 2) {
            String key = s.substring(i, i + 1);
            if (even.containsKey(key)) {
                even.put(key, even.get(key) + 1);
            } else {
                even.put(key, 1);
            }
        }
        for (int i = 1; i < s.length(); i += 2) {
            String key = s.substring(i, i + 1);
            if (odd.containsKey(key)) {
                odd.put(key, odd.get(key) + 1);
            } else {
                odd.put(key, 1);
            }
        }
        int min = Math.min(s.length() - (even.get("0") + odd.get("1")), s.length() - (even.get("1") + odd.get("0")));
        System.out.println(min);
    }
}