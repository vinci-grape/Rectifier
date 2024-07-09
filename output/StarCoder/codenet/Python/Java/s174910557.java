import java.util.Scanner;

public class s174910557 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int N = sc.nextInt();
        String S = sc.next();
        int ans = 1;
        char tmp = S.charAt(0);
        for (int i = 0; i < S.length(); i++) {
            if (S.charAt(i)!= tmp) {
                ans++;
                tmp = S.charAt(i);
            }
        }
        System.out.println(ans);
    }
}