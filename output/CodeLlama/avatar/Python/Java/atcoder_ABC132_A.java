import java.util.Scanner;
import java.util.Set;
import java.util.HashSet;
import java.util.Map;
import java.util.HashMap;
import java.util.Iterator;
import java.util.Collections;
import java.util.List;
import java.util.ArrayList;

public class atcoder_ABC132_A {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String s = sc.nextLine();
        Map<Character, Integer> c = new HashMap<>();
        Set<Character> sa = new HashSet<>();
        for (int i = 0; i < s.length(); i++) {
            if (c.containsKey(s.charAt(i))) {
                c.put(s.charAt(i), c.get(s.charAt(i)) + 1);
            } else {
                c.put(s.charAt(i), 1);
            }
            sa.add(s.charAt(i));
        }
        if (sa.size() != 2) {
            System.out.println("No");
            return;
        }
        for (Character i : sa) {
            if (c.get(i) != 2) {
                System.out.println("No");
                return;
            }
        }
        System.out.println("Yes");
    }
}