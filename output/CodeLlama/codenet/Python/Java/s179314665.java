import java.util.Scanner;

public class s179314665 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int A = sc.nextInt();
        int B = sc.nextInt();
        if (A < 10 && B < 10) {
            System.out.println(A * B);
        } else {
            System.out.println(-1);
        }
    }
}