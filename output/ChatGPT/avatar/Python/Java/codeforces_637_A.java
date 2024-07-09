import java.util.*;
import java.io.*;

public class codeforces_637_A {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int n = Integer.parseInt(scanner.nextLine());
        String[] s = scanner.nextLine().split(" ");
        Map<String, Integer> w = new HashMap<>();
        for (String str : s) {
            if (w.containsKey(str)) {
                w.put(str, w.get(str) + 1);
            } else {
                w.put(str, 1);
            }
        }
        List<String> reversedS = Arrays.asList(s);
        Collections.reverse(reversedS);
        int c = -1;
        String a = "";
        for (String str : w.keySet()) {
            if (w.get(str) == Collections.max(w.values())) {
                if (reversedS.indexOf(str) > c) {
                    a = str;
                    c = reversedS.indexOf(str);
                }
            }
        }
        System.out.println(a);
    }
}