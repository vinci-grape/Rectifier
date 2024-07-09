import java.util.*;
public class atcoder_ABC114_C {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int N = sc.nextInt();
        System.out.println(aaa(N));
    }
    public static int aaa(int n) {
        if (n > N) return 0;
        int ans = 1;
        if (new HashSet<Character>(Arrays.asList('7', '5', '3')).containsAll(new HashSet<Character>(String.valueOf(n).toCharArray()))) ans = 0;
        for (char i : new char[]{'7', '5', '3'}) {
            ans += aaa(n + i - '0');
        }
        return ans;
    }
}