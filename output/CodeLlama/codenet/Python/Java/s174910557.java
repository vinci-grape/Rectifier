import java.util.Scanner;

public class s174910557 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        String s = sc.next();
        int ans = 1;
        char tmp = s.charAt(0);
        for (int i = 0; i < n; i++) {
            if (s.charAt(i) != tmp) {
                ans++;
                tmp = s.charAt(i);
            }
        }
        System.out.println(ans);
    }
}