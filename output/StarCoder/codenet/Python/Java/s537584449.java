import java.util.Scanner;

public class s537584449 {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int a = sc.nextInt();
        int sum = 0;
        while (a!= 0) {
            sum += a % 10;
            a /= 10;
        }
        if (sum == 1) {
            System.out.println("10");
        } else {
            System.out.println(sum);
        }
    }
}