import java.util.Scanner;

public class s259116349 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int N = sc.nextInt();
        int[] primes = {2,3,5,7,11,13,17,19,23,29,31,37,41,43,47};
        int[][] divs = new int[101][13];
        for (int i = 1; i <= 100; i++) {
            for (int j = 0; j < 13; j++) {
                int p = primes[j];
                while (i % p == 0) {
                    i /= p;
                    divs[i - 1][j]++;
                }
            }
        }
        int[] divsum = new int[13];
        for (int i = 1; i <= N; i++) {
            for (int j = 0; j < 13; j++) {
                divsum[j] += divs[i - 1][j];
            }
        }
        int num = 0;
        for (int i = 1; i <= 100; i++) {
            int tmp = 0;
            for (int j = 0; j < 13; j++) {
                if (divsum[j] >= i) {
                    tmp++;
                }
            }
            num += tmp;
        }
        int ans = 0;
        // >=74
        ans += num(75);
        // >=14 & 13~4
        ans += num(15) * (num(5) - 1);
        // >=24 & 23~2
        ans += num(25) * (num(3) - 1);
        // >=4,>=4 & >=2
        ans += num(5) * (num(5) - 1) * (num(3) - 2) / 2;
        System.out.println(ans);
    }
}