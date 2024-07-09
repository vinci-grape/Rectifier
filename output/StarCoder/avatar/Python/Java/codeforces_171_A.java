import java.util.Scanner;
public class codeforces_171_A {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String a = sc.next();
        String b = sc.next();
        int x = Math.max(a.length(), b.length());
        a = a.replace('0', '2');
        b = b.replace('0', '2');
        for (int i = 0; i < x; i++) {
            int d = (a.charAt(x - i - 1) - '0') + (b.charAt(i) - '0') + (i == 0? 0 : (a.charAt(x - i) - '0'));
            if (d > 9) {
                System.out.print(d % 10);
                a = a.substring(0, x - i - 1) + (d / 10) + a.substring(x - i);
            } else {
                System.out.print(d);
                a = a.substring(0, x - i - 1) + a.substring(x - i);
            }
        }
        System.out.println();
    }
}