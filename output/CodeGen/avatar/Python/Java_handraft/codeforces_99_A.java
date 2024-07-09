import java.util.*;
import java.math.BigInteger;

public class codeforces_99_A {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        String l = in.nextLine();
        String[] l_array = l.split("\\.");
        String[] s = l_array[0].split("");
        String[] p = l_array[1].split("");
        int i = Integer.parseInt(p[0]);
        if (s[s.length - 1].equals("9")) {
            System.out.println("GOTO Vasilisa.");
        } else if (!s[s.length - 1].equals("9") && i < 5) {
            System.out.println(l_array[0]);
        } else {
            String sb = l_array[0];
            BigInteger bigInt = new BigInteger(sb);
            sb = bigInt.add(BigInteger.ONE).toString();
            System.out.println(sb);
        }
    }
}