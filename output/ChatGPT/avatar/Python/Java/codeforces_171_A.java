import java.util.Scanner;

public class codeforces_171_A {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        String a = scanner.next();
        String b = scanner.next();
        int x = Math.max(a.length(), b.length());
        a = String.format("%" + x + "s", a).replace(' ', '0');
        b = String.format("%-" + x + "s", b).replace(' ', '0');
        StringBuilder s = new StringBuilder();
        int c = 0;
        for (int i = 0; i < x; i++) {
            int d = Character.getNumericValue(b.charAt(i)) + Character.getNumericValue(a.charAt(x - i - 1)) + c;
            if (d > 9) {
                s.append(Integer.toString(d).charAt(1));
                c = 1;
            } else {
                s.append(Integer.toString(d));
                c = 0;
            }
        }
        if (c == 1) {
            s.append('1');
        }
        System.out.println(Integer.parseInt(s.reverse().toString()));
    }
}