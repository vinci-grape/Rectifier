import java.util.Scanner;

public class s997947249 {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int N = sc.nextInt();
        int K = sc.nextInt();
        if (N % K == 0) {
            System.out.println(0);
        } else {
            System.out.println(1);
        }
    }
}