import java.util.Scanner;

public class s208095748 {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int a = sc.nextInt();
        int b = sc.nextInt();
        int c = sc.nextInt();
        if (b < c) {
            System.out.println(0);
        } else if (a * c < b) {
            System.out.println(c);
        } else {
            System.out.println(b / a);
        }
    }
}