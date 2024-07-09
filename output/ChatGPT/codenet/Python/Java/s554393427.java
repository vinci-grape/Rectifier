import java.util.Scanner;

public class s554393427 {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int N = scanner.nextInt();
        scanner.nextLine();
        
        double okz = 0;
        for (int i = 0; i < N; i++) {
            String[] input = scanner.nextLine().split(" ");
            double x = Double.parseDouble(input[0]);
            String u = input[1];
            
            if (u.equals("JPY")) {
                okz += x;
            } else {
                okz += x * 380000;
            }
        }
        
        System.out.println(okz);
    }
}