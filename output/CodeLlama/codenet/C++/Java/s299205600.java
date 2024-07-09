import java.util.Scanner;

public class s299205600 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int a = sc.nextInt();
        int b = sc.nextInt();
        int result;
        if (a > b) {
            result = 2 * a - 1;
        } else if (a == b) {
            result = 2 * a;
        } else {
            result = 2 * b - 1;
        }
        System.out.println(result);
    }
}