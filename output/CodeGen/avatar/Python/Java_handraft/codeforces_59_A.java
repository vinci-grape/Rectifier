import java.util.*;

public class codeforces_59_A {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        String txt = scanner.nextLine();
        System.out.println(convertToTitle(txt));
    }
    public static String convertToTitle(String s) {
        int cu = 0;
        int cl = 0;
        StringBuilder sb = new StringBuilder();
        for (int i = 0; i < s.length(); i++) {
            if (s.charAt(i) >= 'a' && s.charAt(i) <= 'z') {
                sb.append(s.charAt(i));
                cl++;
            } else {
                sb.append(s.charAt(i));
                cu++;
            }
        }
        if (cu > cl) {
            return sb.toString().toUpperCase();
        } else {
            return sb.toString().toLowerCase();
        }
    }
}