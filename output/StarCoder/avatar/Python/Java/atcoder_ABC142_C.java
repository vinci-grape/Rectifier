import java.util.*;
public class atcoder_ABC142_C {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int N = sc.nextInt();
        int[] A = new int[N];
        for (int i = 0; i < N; i++) {
            A[i] = sc.nextInt();
        }
        Arrays.sort(A);
        for (int i = 0; i < N - 1; i++) {
            System.out.print(A[i] + " ");
        }
        System.out.println(A[N - 1]);
    }
}