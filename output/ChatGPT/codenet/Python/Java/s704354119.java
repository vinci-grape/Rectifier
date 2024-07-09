import java.util.Scanner;

public class s704354119 {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int n = scanner.nextInt();
        scanner.nextLine();
        String[] l = scanner.nextLine().split(" ");
        int max = Integer.MIN_VALUE;
        int min = Integer.MAX_VALUE;
        int sum = 0;
        
        for (int i = 0; i < n; i++) {
            int num = Integer.parseInt(l[i]);
            sum += num;
            
            if (num > max) {
                max = num;
            }
            
            if (num < min) {
                min = num;
            }
        }
        
        System.out.println(min + " " + max + " " + sum);
    }
}