import java.util.Scanner;

public class codeforces_99_A {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        String l = scanner.nextLine();
        String[] lSplit = l.split("\\.");
        char[] s = lSplit[0].toCharArray();
        char[] p = lSplit[1].toCharArray();
        int i = Character.getNumericValue(p[0]);

        if (s[s.length - 1] == '9') {
            System.out.println("GOTO Vasilisa.");
        } else if (s[s.length - 1] != '9' && i < 5) {
            String sStr = String.valueOf(s);
            System.out.println(sStr);
        } else {
            String sStr = String.valueOf(s);
            sStr = String.valueOf(Integer.parseInt(sStr) + 1);
            System.out.println(sStr);
        }
    }
}