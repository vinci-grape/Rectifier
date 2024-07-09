import java.util.Scanner;

public class codeforces_617_B {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        String input = scanner.nextLine();
        String a = scanner.nextLine();
        System.out.println(a.contains("1") ? calculateProduct(a) : 0);
    }
    
    private static int calculateProduct(String a) {
        String[] parts = a.strip().split("1");
        int[] counts = new int[parts.length];
        
        for (int i = 0; i < parts.length; i++) {
            counts[i] = parts[i].length() + 1;
        }
        
        int product = 1;
        for (int count : counts) {
            product *= count;
        }
        
        return product;
    }
}