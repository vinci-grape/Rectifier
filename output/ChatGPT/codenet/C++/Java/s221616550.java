import java.util.Scanner;

public class s221616550 {

    public static boolean isPalindrome(String s) {
        for (int i = 0; i < s.length() / 2; i++) {
            if (s.charAt(i) == s.charAt(s.length() - 1 - i)) {
                continue;
            } else {
                return false;
            }
        }
        return true;
    }

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        String s = scanner.next();
        if (isPalindrome(s) && isPalindrome(s.substring(0, s.length() / 2))) {
            System.out.println("Yes");
        } else {
            System.out.println("No");
        }
    }
}