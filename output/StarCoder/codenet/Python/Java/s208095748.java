import java.util.Scanner;

public class s208095748 {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int A = sc.nextInt();
        int B = sc.nextInt();
        int C = sc.nextInt();
        if (B < C) {
            System.out.println(0);
        } else if (A * C < B) {
            System.out.println(C);
        } else {
            System.out.println(B / A);
        }
    }
}