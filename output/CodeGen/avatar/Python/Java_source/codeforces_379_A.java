import java.util.Scanner;
import java.util.regex.Matcher;
import java.util.regex.Pattern;

public class codeforces_379_A {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int candeleIntere = in.nextInt();
        int b = in.nextInt();
        int restoSciolte = 0;
        int s = 0;
        while (candeleIntere > 0 || restoSciolte >= b) {
            candeleIntere += restoSciolte / b;
            restoSciolte %= b;
            s += candeleIntere;
            restoSciolte += candeleIntere % b;
            candeleIntere /= b;
        }
        System.out.println(s);
    }
}