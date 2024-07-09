import java.util.Scanner;

public class s591424993 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int d = sc.nextInt();
        int g = sc.nextInt();
        int[][] pc = new int[d][2];
        for (int i = 0; i < d; i++) {
            for (int j = 0; j < 2; j++) {
                pc[i][j] = sc.nextInt();
            }
        }

        int ans = Integer.MAX_VALUE;

        for (int bit = 0; bit < 1 << d; bit++) {
            int count = 0;
            int sum = 0;
            boolean[] nokori = new boolean[d + 1];
            for (int i = 0; i < d; i++) {
                if ((bit & (1 << i)) != 0) {
                    sum += pc[i][0] * (i + 1) * 100 + pc[i][1];
                    count += pc[i][0];
                    nokori[i + 1] = false;
                }
            }

            if (sum < g) {
                int use = 0;
                for (int i = 1; i <= d; i++) {
                    if (nokori[i]) {
                        use = i;
                        break;
                    }
                }
                int n = Math.min(pc[use - 1][0], -(-(g - sum) / (use * 100)));
                count += n;
                sum += n * use * 100;
            }

            if (sum >= g) {
                ans = Math.min(ans, count);
            }
        }

        System.out.println(ans);
    }
}