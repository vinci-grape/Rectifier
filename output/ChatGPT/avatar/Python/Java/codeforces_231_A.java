import java.util.Scanner;

public class codeforces_231_A {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int n = scanner.nextInt();
        int c = 0;
        
        for (int i = 0; i < n; i++) {
            String line = scanner.nextLine();
            String[] numbers = line.split(" ");
            int sum = 0;
            
            for (String number : numbers) {
                sum += Integer.parseInt(number);
            }
            
            if (sum > 1) {
                c++;
            }
        }
        
        System.out.println(c);
    }
}