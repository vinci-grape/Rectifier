import java.util.Scanner;

public class s151802561 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int[] A = new int[n];
        for (int i = 0; i < n; i++) {
            A[i] = sc.nextInt();
        }
        int sw = 0;
        for (int i = 0; i < n; i++) {
            int mini = i;
            for (int j = i; j < n; j++) {
                if (A[j] < A[mini]) {
                    mini = j;
                }
            }
            int t = A[i];
            A[i] = A[mini];
            A[mini] = t;
            if (i != mini) {
                sw++;
            }
        }
        for (int i = 0; i < n; i++) {
            if (i != 0) {
                System.out.print(" ");
            }
            System.out.print(A[i]);
        }
        System.out.println();
        System.out.println(sw);
    }
}