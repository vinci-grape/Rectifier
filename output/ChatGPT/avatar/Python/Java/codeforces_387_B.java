import java.util.Scanner;

public class codeforces_387_B {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int n = input.nextInt();
        int m = input.nextInt();
        int[] roundComplexity = new int[n];
        int[] georgeComplexity = new int[m];
        
        for (int i = 0; i < n; i++) {
            roundComplexity[i] = input.nextInt();
        }
        
        for (int i = 0; i < m; i++) {
            georgeComplexity[i] = input.nextInt();
        }
        
        int i = 0;
        int j = 0;
        
        while (i < n && j < m) {
            i += (roundComplexity[i] <= georgeComplexity[j]) ? 1 : 0;
            j++;
        }
        
        System.out.println(n - i);
    }
}