import java.util.Scanner;
import java.util.regex.Matcher;
import java.util.regex.Pattern;

public class s628937234 {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        String s = in.next();
        String t = s.substring(0, 2) + s.substring(s.length() - 2, s.length());
        t += s.substring(s.length() - 1);
        System.out.println(t);
    }
}