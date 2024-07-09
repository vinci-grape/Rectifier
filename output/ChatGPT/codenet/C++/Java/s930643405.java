import java.util.Scanner;

public class s930643405 {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int n = scanner.nextInt();
        int k = scanner.nextInt();
        
        boolean[] d = new boolean[10];
        boolean hantei = true;
        
        for (int i = 0; i < k; i++) {
            int a = scanner.nextInt();
            d[a] = true;
        }
        
        while (true) {
            int x = n;
            hantei = true;
            
            while (x > 0) {
                if (d[x % 10]) {
                    hantei = false;
                    break;
                }
                x /= 10;
            }
            
            if (hantei) {
                System.out.println(n);
                break;
            }
            
            n++;
        }
    }
}