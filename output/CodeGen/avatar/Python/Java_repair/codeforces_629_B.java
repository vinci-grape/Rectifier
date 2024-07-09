import java.util.*;
import java.io.*;

public class codeforces_629_B {
    public static void main(String[] args) throws IOException {
        Scanner scanner = new Scanner(System.in);
        int N = Integer.parseInt(scanner.nextLine());
        int[] m = new int[N];
        int[] f = new int[N];
        for (int i = 0; i < N; i++) {
            String[] input = scanner.nextLine().split(" ");
            m[i] = Integer.parseInt(input[0]);
            f[i] = Integer.parseInt(input[1]);
        }
        int a = 0;
        int b = 0;
        int c = 0;
        for (int i = 0; i < N; i++) {
            a += m[i];
            b += f[i];
            if (a < b) {
                c = Math.min(a, b);
            }
        }
        System.out.println(c);
    }
}