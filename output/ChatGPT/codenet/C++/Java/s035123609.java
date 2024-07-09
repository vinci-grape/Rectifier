import java.util.Scanner;

public class s035123609 {

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        
        int rr = scanner.nextInt();
        int cc = scanner.nextInt();
        int k = scanner.nextInt();
        
        int[][] mat = new int[3000][3000];
        long[][][] dp = new long[3000][3000][4];
        long[] dpl = new long[3000];
        
        for (int i = 1; i <= k; i++) {
            int r = scanner.nextInt();
            int c = scanner.nextInt();
            int v = scanner.nextInt();
            mat[r - 1][c - 1] = v;
        }
        
        dp[0][0][1] = mat[0][0];
        
        for (int y = 0; y < rr; y++) {
            for (int x = 0; x < cc; x++) {
                for (int c = 0; c < 4; c++) {
                    int v = mat[y][x];
                    long q;
                    
                    if (c == 0 || v == 0) {
                        q = (x == 0) ? dpl[x] : Math.max(dpl[x], dp[y][x - 1][c]);
                    } else {
                        q = (x == 0) ? dpl[x] + v : Math.max(dpl[x] + v, Math.max(dp[y][x - 1][c], dp[y][x - 1][c - 1] + v));
                    }
                    
                    dp[y][x][c] = q;
                }
            }
            
            for (int x = 0; x < cc; x++) {
                dpl[x] = Math.max(Math.max(dp[y][x][0], dp[y][x][1]), Math.max(dp[y][x][2], dp[y][x][3]));
            }
        }
        
        System.out.println(dpl[cc - 1]);
    }
}