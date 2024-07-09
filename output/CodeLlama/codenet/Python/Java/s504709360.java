import java.util.Scanner;

public class s504709360 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String s = sc.nextLine();
        if (s.length() < 26) {
            for (int i = 0; i < 26; i++) {
                char c = (char) (i + 'a');
                if (!s.contains(String.valueOf(c))) {
                    System.out.println(s + c);
                    return;
                }
            }
        } else {
            for (int i = 1; i < 26; i++) {
                if (s.charAt(i - 1) < s.charAt(i)) {
                    String s1 = s.substring(0, i - 1);
                    for (int j = 0; j < 26; j++) {
                        char c = (char) (j + 'a');
                        if (c > s.charAt(i - 1) && !s1.contains(String.valueOf(c))) {
                            System.out.println(s1 + c);
                            return;
                        }
                    }
                }
            }
        }
        System.out.println(-1);
    }
}