import java.util.*;

public class atcoder_AGC006_A {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int n = scanner.nextInt();
        String s = scanner.next();
        String[] map = s.split("");
        int[] map2 = new int[128];
        int max = 0;
        for (int i = 0; i < n; i++) {
            map[map[i].length()]++;
            max = Math.max(max, map[map[i].length()]);
        }
        String start = "";
        String end = "";
        for (int i = 0; i < n; i++) {
            while (end < n && map[s.charAt(end)] == 0) {
                end++;
            }
            if (end - start > max) {
                max = end - start;
            }
            map2[s.charAt(i)]--;
            start = i + 1;
        }
        System.out.println(map2.length);
    }
}