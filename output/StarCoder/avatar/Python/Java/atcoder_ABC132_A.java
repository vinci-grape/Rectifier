import java.util.*;
public class atcoder_ABC132_A {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String S = sc.next();
        char[] s = S.toCharArray();
        int[] c = new int[26];
        for(int i = 0; i < s.length; i++) {
            c[s[i] - 'a']++;
        }
        Set<Character> set = new HashSet<Character>();
        for(int i = 0; i < s.length; i++) {
            set.add(s[i]);
        }
        if(set.size()!= 2) {
            System.out.println("No");
            return;
        }
        for(int i = 0; i < 26; i++) {
            if(c[i]!= 2) {
                System.out.println("No");
                return;
            }
        }
        System.out.println("Yes");
    }
}