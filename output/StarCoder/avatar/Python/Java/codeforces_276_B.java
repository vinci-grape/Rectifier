import java.util.*;
public class codeforces_276_B {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String s = sc.next();
        Map<Character, Integer> map = new HashMap<>();
        for (int i = 0; i < s.length(); i++) {
            char c = s.charAt(i);
            if (map.containsKey(c)) {
                map.put(c, map.get(c) + 1);
            } else {
                map.put(c, 1);
            }
        }
        int count = 0;
        boolean flag = true;
        for (Map.Entry<Character, Integer> entry : map.entrySet()) {
            if (entry.getValue() % 2!= 0) {
                count++;
                if (count > 1) {
                    flag = false;
                    break;
                }
            }
        }
        if (flag) {
            System.out.println("First");
        } else if (s.length() % 2 == 0) {
            System.out.println("Second");
        } else {
            System.out.println("First");
        }
    }
}
