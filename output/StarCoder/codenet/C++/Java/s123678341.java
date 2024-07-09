import java.util.*;
import java.io.*;

public class s123678341 {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int X = sc.nextInt();
        int Y = sc.nextInt();
        int Z = sc.nextInt();
        int K = sc.nextInt();
        int[] A = new int[X];
        int[] B = new int[Y];
        int[] C = new int[Z];
        for (int i = 0; i < X; i++) {
            A[i] = sc.nextInt();
        }
        for (int i = 0; i < Y; i++) {
            B[i] = sc.nextInt();
        }
        for (int i = 0; i < Z; i++) {
            C[i] = sc.nextInt();
        }
        Arrays.sort(A);
        Arrays.sort(B);
        Arrays.sort(C);
        int[] AB = new int[X * Y];
        for (int i = 0; i < X; i++) {
            for (int j = 0; j < Y; j++) {
                AB[i * Y + j] = A[i] + B[j];
            }
        }
        Arrays.sort(AB);
        int[] ABC = new int[K];
        for (int i = 0; i < K; i++) {
            for (int j = 0; j < Z; j++) {
                ABC[i] = AB[i] + C[j];
            }
        }
        Arrays.sort(ABC);
        for (int i = 0; i < K; i++) {
            System.out.println(ABC[i]);
        }
    }
}