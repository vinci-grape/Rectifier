import java.util.Scanner;
public class codeforces_59_A {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String txt = sc.nextLine();
        int cu = 0;
        int cl = 0;
        for (int z = 0; z < txt.length(); z++) {
            if (Character.isLowerCase(txt.charAt(z))) {
                cl = cl + 1;
            } else {
                cu = cu + 1;
            }
        }
        if (cu > cl) {
            System.out.println(txt.toUpperCase());
        } else {
            System.out.println(txt.toLowerCase());
        }
    }
}