import java.util.*;

public class atcoder_ABC151_A {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        String c = in.next();
        char result = solve(c);
        System.out.println(result);
    }

    public static char solve(String c) {
        String a = "abcdefghijklmnopqrstuvwxyz";
        int i = a.indexOf(c);
        return a.charAt(i+1);
    }
}