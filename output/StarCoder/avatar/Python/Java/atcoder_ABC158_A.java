import java.util.Scanner;

public class atcoder_ABC158_A {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String s = sc.next();
        String result = "Yes";
        if (!s.contains("A") ||!s.contains("B")) {
            result = "No";
        }
        System.out.println(result);
    }
}
