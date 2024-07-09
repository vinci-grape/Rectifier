import java.util.*;

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
        } else if (s[s.length - 1].equals("0") && i < 5) {
            StringBuilder sb = new StringBuilder();
            for (int j = 0; j < s.length - 1; j++) {
                sb.append(s[j]);
            }
            sb.append(Integer.toString(Integer.parseInt(sb.toString()) + 1));
            System.out.println(sb.toString());
        } else {
            StringBuilder sb = new StringBuilder();
            for (int j = 0; j < s.length - 1; j++) {
                sb.append(s[j]);
            }
            sb.append(Integer.toString(Integer.parseInt(sb.toString()) + 1));
            System.out.println(sb.toString());
        }
    }
}