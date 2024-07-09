import java.util.Scanner;

public class s387994967 {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int A = sc.nextInt();
        int B = sc.nextInt();
        if (A < 13 && A >= 6) {
            System.out.println(B / 2);
        }
        if (A < 6) {
            System.out.println(0);
        }
        if (A >= 13) {
            System.out.println(B);
        }
    }
}