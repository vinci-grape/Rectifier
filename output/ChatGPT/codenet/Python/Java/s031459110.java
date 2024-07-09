import java.util.Scanner;

public class s031459110 {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int N = scanner.nextInt();
        String c = scanner.next();

        int num_w = 0;
        for (int i = 0; i < N; i++) {
            if (c.charAt(i) == 'W') {
                num_w++;
            }
        }
        int num_r = N - num_w;

        String comp = "R".repeat(num_r) + "W".repeat(num_w);
        int ans = 0;
        for (int i = 0; i < num_r; i++) {
            if (c.charAt(i) != comp.charAt(i)) {
                ans++;
            }
        }

        ans = Math.min(Math.min(num_w, num_r), ans);
        System.out.println(ans);
    }
}