import java.util.Scanner;

public class codeforces_500_A {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int n = scanner.nextInt();
        int t = scanner.nextInt();
        int[] s = new int[n];
        
        for (int i = 0; i < n; i++) {
            s[i] = scanner.nextInt();
        }
        
        int currentCell = 0;
        while (currentCell <= t) {
            currentCell += s[currentCell - 1];
            if (currentCell == t) {
                System.out.println("YES");
                System.exit(0);
            } else {
                continue;
            }
        }
        
        System.out.println("NO");
    }
}