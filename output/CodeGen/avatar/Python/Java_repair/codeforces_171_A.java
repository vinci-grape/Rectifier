import java.util.*;

public class codeforces_171_A {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        String a = scanner.nextLine();
        String b = scanner.nextLine();
        StringBuilder sb = new StringBuilder();
        int c = 0;
        for (int i = 0; i < a.length(); i++) {
            int d = (b.charAt(i) - '0') + (a.charAt(x - i - 1) - '0') + c;
            if (d > 9) {
                sb.append(d - 10);
                c = 1;
            } else {
                sb.append(d);
                c = 0;
            }
        }
        if (c == 1) {
            sb.append(1);
        }
        System.out.println(sb.toString());
    }
}