import java.util.Scanner;

public class s539244923 {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int k = sc.nextInt();
        System.out.println(n+k-(k%n));
    }
}