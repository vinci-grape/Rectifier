import java.util.*;
import java.io.*;

public class atcoder_ABC120_C {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        String s = br.readLine();
        if (s.chars().distinct().count() == 1) {
            System.out.println(0);
            System.exit(0);
        }
        Map<Character, Integer> counter = new HashMap<>();
        for (char c : s.toCharArray()) {
            counter.put(c, counter.getOrDefault(c, 0) + 1);
        }
        int ans = Collections.min(counter.values()) * 2;
        System.out.println(ans);
    }
}