import java.util.*;
import java.io.*;

public class s968402497 {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        int n = sc.nextInt();
        int m = sc.nextInt();
        if (n > m) {
            int temp = n;
            n = m;
            m = temp;
        }
        for (int i = 1; i <= m; i++) {
            if (i * t >= n && i * t <= m) {
                System.out.println("OK");
                return;
            }
        }
        System.out.println("NG");
    }
}