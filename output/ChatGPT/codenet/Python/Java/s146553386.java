import java.util.Scanner;

public class s146553386 {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int n = input.nextInt();
        int[][] a = new int[2][n];
        
        for (int i = 0; i < 2; i++) {
            for (int j = 0; j < n; j++) {
                a[i][j] = input.nextInt();
            }
        }
        
        for (int i = 0; i < n; i++) {
            a[1][i] = a[1][n-1-i];
        }
        
        int[] res_0 = new int[n];
        int[] res_1 = new int[n];
        
        res_0[0] = a[0][0];
        res_1[0] = a[1][0];
        
        for (int i = 1; i < n; i++) {
            res_0[i] = res_0[i-1] + a[0][i];
            res_1[i] = res_1[i-1] + a[1][i];
        }
        
        int ans = 0;
        
        for (int i = 0; i < n; i++) {
            int check = res_0[i] + res_1[n-1-i];
            ans = Math.max(ans, check);
        }
        
        System.out.println(ans);
    }
}