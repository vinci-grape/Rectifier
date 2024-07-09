import java.util.Scanner;
public class s275739084 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int a = sc.nextInt();
        int b = sc.nextInt();
        int c = a + b;
        if (a % 3 != 0 && b % 3 != 0 && c % 3 != 0) {
            System.out.println("Impossible");
        } else {
            System.out.println("Possible");
        }
    }
}