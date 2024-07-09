import java.util.*;
import java.io.*;
import java.math.*;

public class s137613418 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int[] A = new int[n];
        for (int i = 0; i < n; i++) {
            A[i] = sc.nextInt();
        }
        if (n == new HashSet<Integer>(Arrays.asList(A)).size()) {
            System.out.println("YES");
        } else {
            System.out.println("NO");
        }
    }
}