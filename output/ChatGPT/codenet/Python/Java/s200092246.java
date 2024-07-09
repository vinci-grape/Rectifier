import java.util.Scanner;

public class s200092246 {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int N = scanner.nextInt();
        int[] ans = new int[2];

        for (int i = 1; i <= N; i++) {
            if (getSum(i) < N) {
                continue;
            } else {
                ans[0] = i - 1;
                ans[1] = getSum(i) - N;
                break;
            }
        }

        for (int i = 0; i <= ans[0]; i++) {
            if (i + 1 != ans[1]) {
                System.out.println(i + 1);
            }
        }
    }

    public static int getSum(int n) {
        return (n * (n + 1)) / 2;
    }
}