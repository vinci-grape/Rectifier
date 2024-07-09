import java.util.Scanner;

public class s800506321 {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int n = scanner.nextInt();
        int k = scanner.nextInt();
        int x = n / k;
        int y = n % k;
        int z;
        if (y != 0) {
            z = x + 1 - x;
        } else {
            z = x - x;
        }
        System.out.println(z);
    }
}