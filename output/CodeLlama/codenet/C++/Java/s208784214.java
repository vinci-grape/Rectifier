import java.util.Scanner;
public class s208784214 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int N = sc.nextInt();
        int A = sc.nextInt();
        System.out.println((N % 500 <= A) ? "Yes" : "No");
    }
}