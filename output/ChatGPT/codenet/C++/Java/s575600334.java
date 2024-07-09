import java.util.Scanner;

public class s575600334 {
    public static void binPrint(int x, int bits) {
        for (int i = bits - 1; i >= 0; i--) {
            System.out.print((x & (1 << i)) != 0 ? 1 : 0);
        }
        System.out.println();
    }
    
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int a = scanner.nextInt();
        int b = scanner.nextInt();
        
        binPrint(a & b, 32);
        binPrint(a | b, 32);
        binPrint(a ^ b, 32);
        
        scanner.close();
    }
}