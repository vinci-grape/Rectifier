import java.util.Scanner;

public class s726701284 {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        String s = scanner.next();
        for (char i = 'a'; i <= 'z'; i++) {
            int a = 0;
            for (int j = 0; j < s.length(); j++) {
                if (i == s.charAt(j)) {
                    a++;
                }
            }
            if (a == 0) {
                System.out.println(i);
                break;
            }
            if (i == 'z') {
                System.out.println("None");
                break;
            }
        }
    }
}