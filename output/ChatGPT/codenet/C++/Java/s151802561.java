import java.util.Scanner;

public class s151802561 {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int[] A = new int[100];
        int n, i, j, t, sw = 0, mini;

        n = scanner.nextInt();
        for (i = 0; i < n; i++) {
            A[i] = scanner.nextInt();
        }

        for (i = 0; i < n; i++) {
            mini = i;
            for (j = i; j < n; j++) {
                if (A[j] < A[mini]) {
                    mini = j;
                }
            }
            t = A[i];
            A[i] = A[mini];
            A[mini] = t;
            if (i != mini) {
                sw++;
            }
        }

        for (i = 0; i < n; i++) {
            if (i != 0) {
                System.out.print(" ");
            }
            System.out.print(A[i]);
        }
        System.out.println();
        System.out.println(sw);
    }
}