import java.util.*;
import java.io.*;
import java.lang.*;

public class s973217665 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        while (n-- > 0) {
            int p = sc.nextInt();
            int q = sc.nextInt();
            int l = (int) Math.sqrt(p * p + q * q);
            boolean isprime = true;
            for (int i = 0; i < l; i++) {
                for (int j = 0; j < l; j++) {
                    int x = i * i + j * j;
                    if (x <= 1 || x >= p * p + q * q) continue;
                    if ((i * p + j * q) % x == 0 && (i * q - j * p) % x == 0) {
                        isprime = false;
                        break;
                    }
                }
                if (!isprime) break;
            }
            System.out.println(isprime? "P" : "C");
        }
    }
}