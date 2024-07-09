import java.util.*;
import java.io.*;

public class s612033342 {
  public static void main(String[] args) {
    Scanner cin = new Scanner(System.in);
    int h = cin.nextInt();
    int w = cin.nextInt();
    int k = cin.nextInt();
    int[][] hw = new int[h][w];
    for (int i = 0; i < h; i++) {
      for (int j = 0; j < w; j++) {
        char c = cin.next().charAt(0);
        if (c == '#') hw[i][j] = 1;
      }
    }
    int sum = 0;
    for (int i = 0; i < (1 << h); i++) {
      for (int j = 0; j < (1 << w); j++) {
        if (count(hw, i, j) == k) sum++;
      }
    }
    System.out.println(sum);
  }

  public static int count(int[][] hw, int a, int b) {
    int sum = 0;
    for (int i = 0; i < hw.length; i++) {
      for (int j = 0; j < hw[0].length; j++) {
        if (((a >> i) & 1) == 1 && ((b >> j) & 1) == 1 && hw[i][j] == 1) sum++;
      }
    }
    return sum;
  }
}