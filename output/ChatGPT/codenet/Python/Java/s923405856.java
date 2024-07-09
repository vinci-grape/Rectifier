import java.util.Scanner;

public class s923405856 {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        
        while (true) {
            int n = scanner.nextInt();
            
            if (n == 0) {
                break;
            }
            
            int res = -1111111111;
            int s = 0;
            
            for (int i = 0; i < n; i++) {
                int a = scanner.nextInt();
                s = Math.max(s + a, a);
                res = Math.max(s, res);
            }
            
            System.out.println(res);
        }
    }
}