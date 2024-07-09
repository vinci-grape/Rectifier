import java.util.*;
public class atcoder_ABC151_A {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        String c = in.next();
        System.out.println(solve(c));
    }
    public static String solve(String c) {
        String a = "abcdefghijklmnopqrstuvwxyz";
        int i = a.indexOf(c);
        return a.substring(i + 1, i + 2);
    }
}
