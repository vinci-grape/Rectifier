import java.util.Scanner;

public class s807902500 {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        String s = scanner.next();
        String t = scanner.next();
        s += s;
        System.out.println(s.indexOf(t) != -1 ? "Yes" : "No");
    }
}