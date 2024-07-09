import java.io.*;
import java.util.*;

public class s007458552 {
    public static void main(String[] args) throws Exception {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        String s = sc.next();
        Map<Character, Integer> c = new HashMap<>();
        for (int i = 0; i < s.length(); i++) {
            c.put(s.charAt(i), c.getOrDefault(s.charAt(i), 0) + 1);
        }
        System.out.println(c.get('R') > n - c.get('R') ? "Yes" : "No");
    }
}