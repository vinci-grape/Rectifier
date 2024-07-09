import java.util.*;
import java.lang.*;
import java.io.*;

public class s612033342 {
    public static void main (String[] args) {
        Scanner sc = new Scanner(System.in);
        int h = sc.nextInt();
        int w = sc.nextInt();
        int k = sc.nextInt();
        int[][] hw = new int[h][w];
        for (int i = 0; i < h; i++) {
            for (int j = 0; j < w; j++) {
                char c = sc.next().charAt(0);
                if (c == '#') hw[i][j] = 1;
            }
        }
        int sum = 0;
        for (int i = 0; i < pow2(h); i++) {
            for (int j = 0; j < pow2(w); j++) {
                if (count(hw, i, j) == k) sum++;
            }
        }
        System.out.println(sum);
    }

    public static int pow2(int a) {
        int ret = 1;
        for (int i = 0; i < a; i++) ret *= 2;
        return ret;
    }

    public static int count(int[][] hw, int a, int b) {
        int sum = 0;
        for (int i = 0; i < hw.length; i++) {
            for (int j = 0; j < hw[0].length; j++) {
                if (a >> i & 1 && b >> j & 1 && hw[i][j] == 1) sum++;
            }
        }
        return sum;
    }
}