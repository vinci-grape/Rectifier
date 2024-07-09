import java.util.Scanner;

public class s537584449 {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int a = sc.nextInt();
        int temp = a;
        int sum = 0;
        while (temp != 0) {
            sum += temp % 10;
            temp = temp / 10;
        }
        if (sum == 1) {
            System.out.println("10");
        } else {
            System.out.println(sum);
        }
    }
}