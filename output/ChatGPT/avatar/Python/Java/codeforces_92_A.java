import java.util.Scanner;

public class codeforces_92_A {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int n = scanner.nextInt();
        int m = scanner.nextInt();
        int i = 1;
        
        while (m >= i) {
            m -= i;
            i = (i % n) + 1;
        }
        
        System.out.println(m);
    }
}