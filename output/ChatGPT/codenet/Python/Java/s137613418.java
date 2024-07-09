import java.util.Scanner;
import java.util.HashSet;

public class s137613418 {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int n = scanner.nextInt();
        int[] A = new int[n];
        for (int i = 0; i < n; i++) {
            A[i] = scanner.nextInt();
        }

        HashSet<Integer> set = new HashSet<>();
        for (int i = 0; i < n; i++) {
            set.add(A[i]);
        }

        if (n == set.size()) {
            System.out.println("YES");
        } else {
            System.out.println("NO");
        }
    }
}