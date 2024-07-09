import java.util.Arrays;
import java.util.Scanner;

public class s954770518 {
    public static void main(String[] args) {
        int[] s = new int[11];
        Scanner scanner = new Scanner(System.in);
        
        for (int i = 0; i < 10; i++) {
            s[i] = scanner.nextInt();
        }
        
        Arrays.sort(s);
        
        for (int i = 9; i > 6; i--) {
            System.out.println(s[i]);
        }
        
        scanner.close();
    }
}