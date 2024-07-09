import java.util.*;

public class atcoder_ABC147_D {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        String[] A = scanner.nextLine().split(" ");
        int N = Integer.parseInt(A[0]);
        System.out.println(findMaxForm(A, N));
    }
    public static int findMaxForm(String[] A, int N) {
        int result = 0;
        for (int b = 0; b < 60; b++) {
            int bs = (A[b] & 1) == 1? 1 : 0;
            result = (result + bs * (N - bs) * (1 << b)) % 1000000007;
        }
        return result;
    }
}