import java.util.Scanner;

public class s628937234 {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        String s = scanner.next();
        String t = s.charAt(0) + String.valueOf(s.length() - 2) + s.charAt(s.length() - 1);
        System.out.println(t);
    }
}