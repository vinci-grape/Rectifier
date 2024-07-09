import java.util.*;
public class s398580870 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int k = sc.nextInt();
        if (k % 2 == 1) {
            System.out.println((int) Math.pow(n / k, 3));
        } else {
            System.out.println((int) Math.pow(n / k, 3) + (int) Math.pow((n + k / 2) / k, 3));
        }
    }
}