import java.util.Scanner;

public class codeforces_147_A {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String s = sc.nextLine();
        String res = "";
        String punctuation = ", . ! ?";
        for (int i = 0; i < s.length(); i++) {
            if (i >= 1) {
                if (s.charAt(i) == ' ') {
                    if (res.charAt(res.length() - 1) != ' ') {
                        res += s.charAt(i);
                    } else {
                        continue;
                    }
                } else {
                    if (punctuation.contains(String.valueOf(s.charAt(i)))) {
                        if (res.charAt(res.length() - 1) == ' ') {
                            res = res.substring(0, res.length() - 1);
                        }
                        res += s.charAt(i);
                        res += " ";
                    } else {
                        res += s.charAt(i);
                    }
                }
            } else {
                if (s.charAt(i) == ' ') {
                    continue;
                }
                if (punctuation.contains(String.valueOf(s.charAt(i)))) {
                    continue;
                } else {
                    res += s.charAt(i);
                }
            }
        }
        System.out.println(res);
    }
}