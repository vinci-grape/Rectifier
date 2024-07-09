import java.util.Scanner;

public class s495709932 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int N = sc.nextInt();
        int[] A = new int[N];
        for (int i = 0; i < N; i++) {
            A[i] = sc.nextInt();
        }

        int answer = 0;
        for (int i = 0; i < N - 1; i++) {
            for (int j = i + 1; j < N; j++) {
                int diff = Math.abs(A[i] - A[j]);
                answer = Math.max(answer, diff);
            }
        }
        System.out.println(answer);
    }
}