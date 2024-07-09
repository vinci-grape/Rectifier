import java.util.Scanner;

public class s501065052 {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int N = sc.nextInt();
        int[] mem = new int[N + 1];
        for (int i = 1; i <= N; ++i) {
            int P = sc.nextInt();
            mem[P] = i;
        }

        int maxcnt = 1;
        int cnt = 1;
        for (int i = 1; i < N; ++i) {
            if (mem[i] < mem[i + 1]) {
                cnt++;
            } else {
                maxcnt = Math.max(maxcnt, cnt);
                cnt = 1;
            }
            if (i == N - 1) {
                maxcnt = Math.max(maxcnt, cnt);
            }
        }
        System.out.println(N - maxcnt);
    }
}