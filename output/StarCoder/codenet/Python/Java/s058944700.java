import java.util.Scanner;

public class s058944700 {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int k = sc.nextInt();
        int tmp = n % k;
        if (tmp >= k - tmp) {
            System.out.println(k - tmp);
        } else {
            System.out.println(tmp);
        }
    }
}