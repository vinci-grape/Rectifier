import java.util.Scanner;

public class s459892612 {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);

        int a, b, c;
        a = input.nextInt();
        b = input.nextInt();
        c = input.nextInt();

        if (a + b >= c) {
            System.out.println("Yes");
        } else {
            System.out.println("No");
        }
    }
}