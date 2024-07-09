import java.util.*;

public class codeforces_265_B {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        String s = scanner.nextLine();
        System.out.println(findLengthOfLastWord(s));
    }
    public static int findLengthOfLastWord(String s) {
        int ans = 0;
        int last = 0;
        for (int i = 0; i < s.length(); i++) {
            if (s.charAt(i) ==' ') {
                last = i;
            }
            if (s.charAt(i)!=' ') {
                ans += i - last;
                last = i;
            }
        }
        return ans + 1;
    }
}