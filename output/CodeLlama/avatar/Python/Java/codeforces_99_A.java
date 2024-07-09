import java.util.Scanner;

public class codeforces_99_A {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String s = sc.nextLine();
        String[] l = s.split(".");
        String[] p = l[1].split("");
        int i = Integer.parseInt(p[0]);
        if (l[0].charAt(l[0].length() - 1) == '9') {
            System.out.println("GOTO Vasilisa.");
        } else if (l[0].charAt(l[0].length() - 1) != '9' && i < 5) {
            System.out.println(l[0]);
        } else {
            int n = Integer.parseInt(l[0]) + 1;
            System.out.println(n);
        }
    }
}