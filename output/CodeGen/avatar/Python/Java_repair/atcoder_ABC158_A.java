import java.util.*;

public class atcoder_ABC158_A {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        String s = in.nextLine();
        String result = "Yes";
        if (s.contains("A") && s.contains("B")) {
            result = "Yes";
        } else {
            result = "No";
        }
        System.out.println(result);
    }
}