import java.util.*;
public class s726701284 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String s = sc.nextLine();
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