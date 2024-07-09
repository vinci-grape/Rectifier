import java.util.Scanner;

public class s860472409 {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int N = scanner.nextInt();
        int[] A = new int[N];
        for (int i = 0; i < N; i++) {
            A[i] = scanner.nextInt();
        }
        
        int ans = 0;
        int count = 0;
        for (int i = 0; i < N - 1; i++) {
            if (A[i] == A[i+1]) {
                count++;
                if (count % 2 != 0) {
                    ans++;
                }
            } else {
                count = 0;
            }
        }
        
        System.out.println(ans);
    }
}