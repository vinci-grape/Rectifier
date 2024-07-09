import java.util.Scanner;

public class s197514717 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int A = sc.nextInt();
        int B = sc.nextInt();
        int C = sc.nextInt();
        System.out.println(Math.max(10*A+B+C,Math.max(10*B+C+A,10*C+A+B)));
    }
}