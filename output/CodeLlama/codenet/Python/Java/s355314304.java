import java.util.Scanner;

public class s355314304 {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        if (n % 1000 == 0) {
            System.out.println(0);
        } else {
            System.out.println(1000 - n % 1000);
        }
    }
}