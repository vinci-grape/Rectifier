import java.util.Scanner;

public class s759499751 {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int n = scanner.nextInt();
        int k = scanner.nextInt();
        scanner.nextLine();
        char[] a = scanner.nextLine().toCharArray();
        int[] c = new int[n];
        
        for (int i = 1; i < n; i++) {
            if (a[i] == 'C' && a[i-1] == 'A') {
                c[i] = c[i-1] + 1;
            } else {
                c[i] = c[i-1];
            }
        }
        
        for (int w = 0; w < k; w++) {
            int l = scanner.nextInt();
            int r = scanner.nextInt();
            System.out.println(c[r-1] - c[l-1]);
        }
    }
}