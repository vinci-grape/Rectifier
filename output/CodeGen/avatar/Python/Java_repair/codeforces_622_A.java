import java.util.*;

public class codeforces_622_A {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        String s = scanner.nextLine();
        String[] lines = s.split(" ");
        String[] map = new String[128];
        int max = 0;
        int start = 0;
        for (int i = 0; i < lines.length; i++) {
            if (map[lines[i].charAt(0)] == 0) {
                map[lines[i].charAt(0)] = i + 1;
            } else {
                max = Math.max(max, i - start);
                start = map[lines[i].charAt(0)] + 1;
            }
        }
        max = Math.max(max, lines.length - start);
        System.out.println(max);
    }
}