import java.util.*;
public class s014089689 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        String s = sc.next();
        int cnt = 0;
        for (int i = 0; i < n; i++) {
            cnt++;
            int j = i + 1;
            for (; j < n; j++) {
                if (s.charAt(i) != s.charAt(j)) {
                    break;
                }
            }
            i = j - 1;
        }
        System.out.println(cnt);
    }
}