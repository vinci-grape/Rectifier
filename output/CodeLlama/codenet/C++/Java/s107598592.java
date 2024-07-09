import java.util.Scanner;
import java.util.Arrays;
import java.util.Collections;
 
public class s107598592 {
 
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int N = sc.nextInt();
        int[] X = new int[N];
        int[] Y = new int[N];
        for (int i = 0; i < N; i++) {
            X[i] = sc.nextInt();
            Y[i] = X[i];
        }
        Arrays.sort(Y);
        int y = Y[N / 2];
        for (int i = 0; i < N; i++) {
            if (X[i] < y) {
                System.out.println(y);
            } else {
                System.out.println(Y[N / 2 - 1]);
            }
        }
    }
}