import java.util.Scanner;
public class s800506321 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int k = sc.nextInt();
        int x = n / k;
        int y = n % k;
        int z = 0;
        if (y != 0) {
            z = x + 1 - x;
        } else {
            z = x - x;
        }
        System.out.println(z);
    }
}