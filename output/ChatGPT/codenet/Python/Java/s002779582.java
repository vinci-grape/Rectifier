import java.util.Scanner;

public class s002779582 {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int N = scanner.nextInt();
        int[] Hs = new int[N];
        for (int i = 0; i < N; i++) {
            Hs[i] = scanner.nextInt();
        }
        
        int ans = 0;
        int maxH = 0;
        for (int H : Hs) {
            if (maxH <= H) {
                ans += 1;
                maxH = H;
            }
        }
        
        System.out.println(ans);
    }
}