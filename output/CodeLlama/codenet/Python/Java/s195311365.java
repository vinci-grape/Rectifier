import java.util.Scanner;

public class s195311365 {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String s = sc.nextLine();
        if (s.length() == 2) {
            System.out.println(s);
        } else {
            System.out.println(new StringBuilder(s).reverse().toString());
        }
    }
}