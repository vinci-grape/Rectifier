import java.util.*;

public class atcoder_ABC140_D {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int N = Integer.parseInt(scanner.nextLine());
        int K = Integer.parseInt(scanner.nextLine());
        Scanner scanner2 = new Scanner(System.in);
        String[] S = new String[N];
        String[] happy = new String[N];
        String[] happy_cnt = new String[N];
        for (int i = 0; i < N; i++) {
            S[i] = i + 1;
            happy[i] = 1;
            happy_cnt[i] = 1;
        }
        for (int i = 0; i < N; i++) {
            for (int j = i + 1; j < N; j++) {
                if (S[i] == S[j]) {
                    happy[i]++;
                    happy_cnt[j]++;
                }
            }
        }
        int ans = N - 1;
        for (int i = 0; i < N; i++) {
            if (happy_cnt[i] >= K) {
                ans = Math.min(ans, i);
            }
        }
        System.out.println(ans);
    }
}