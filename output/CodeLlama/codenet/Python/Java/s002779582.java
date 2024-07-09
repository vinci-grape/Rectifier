import java.util.Scanner;

public class s002779582 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int N = sc.nextInt();
        int[] Hs = new int[N];
        for (int i = 0; i < N; i++) {
            Hs[i] = sc.nextInt();
        }

        int ans = 0;
        int maxH = 0;
        for (int H : Hs) {
            if (maxH <= H) {
                ans++;
                maxH = H;
            }
        }

        System.out.println(ans);
    }
}