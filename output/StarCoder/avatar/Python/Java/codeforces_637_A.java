import java.util.*;
public class codeforces_637_A {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        String s = sc.next();
        int[] w = new int[26];
        for (int i = 0; i < n; i++) {
            w[s.charAt(i) - 'a']++;
        }
        int c = -1, a = 0;
        for (int i = 0; i < 26; i++) {
            if (w[i] == Math.max(w)) {
                if (s.lastIndexOf((char) (i + 'a')) > c) {
                    a = i;
                    c = s.lastIndexOf((char) (i + 'a'));
                }
            }
        }
        System.out.println((char) (a + 'a'));
    }
}