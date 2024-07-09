import java.util.Scanner;

public class s031459110 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int N = sc.nextInt();
        String c = sc.next();
        int num_w = 0;
        int num_r = 0;
        for (int i = 0; i < N; i++) {
            if (c.charAt(i) == 'W') {
                num_w++;
            } else {
                num_r++;
            }
        }
        String comp = "";
        for (int i = 0; i < num_r; i++) {
            comp += "R";
        }
        for (int i = 0; i < num_w; i++) {
            comp += "W";
        }
        int ans = 0;
        for (int i = 0; i < num_r; i++) {
            if (c.charAt(i) != comp.charAt(i)) {
                ans++;
            }
        }
        ans = Math.min(num_w, num_r);
        ans = Math.min(ans, Math.min(num_w, num_r));
        System.out.println(ans);
    }
}