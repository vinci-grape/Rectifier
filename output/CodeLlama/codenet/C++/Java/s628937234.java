import java.util.Scanner;

public class s628937234 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String s = sc.nextLine();
        String t = s.substring(0, 1) + (s.length() - 2) + s.substring(s.length() - 1);
        System.out.println(t);
    }
}