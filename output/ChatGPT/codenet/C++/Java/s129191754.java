import java.util.*;
import java.io.*;

public class s129191754 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int[] a = new int[n];
        for (int i = 0; i < n; i++) {
            a[i] = sc.nextInt();
        }
        Arrays.sort(a);
        for (int i = 0; i < n-1; i++) {
            if (a[i] == a[i+1]) {
                System.out.println("NO");
                return;
            }
        }
        System.out.println("YES");
    }
}