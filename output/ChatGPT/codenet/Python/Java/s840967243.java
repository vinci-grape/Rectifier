import java.util.Scanner;

public class s840967243 {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int MOD = (int) (1e9 + 7);
        int n = scanner.nextInt();
        int m = scanner.nextInt();
        int max = Math.max(2 - m + n, 0);
        int result = max * factorial(n) % MOD * factorial(m) % MOD;
        System.out.println(result);
    }
    
    public static int factorial(int num) {
        int result = 1;
        for (int i = 2; i <= num; i++) {
            result = (result * i) % MOD;
        }
        return result;
    }
}