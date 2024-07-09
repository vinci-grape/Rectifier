import java.util.Scanner;
import java.util.ArrayList;
import java.util.Collections;

public class s798522572 {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int N = input.nextInt();
        int T = input.nextInt();
        int[] A = new int[N];
        ArrayList<Integer> B = new ArrayList<Integer>();
        for(int i = 0; i < N; i++) {
            A[i] = input.nextInt();
        }
        int m = A[0];
        B.add(A[1] - m);
        m = Math.min(m, A[1]);
        for(int i = 2; i < N; i++) {
            B.add(A[i] - m);
            m = Math.min(m, A[i]);
        }
        int maxElement = Collections.max(B);
        int count = Collections.frequency(B, maxElement);
        System.out.println(count);
    }
}