import java.util.Scanner;

public class s441329208 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String s = sc.next();
        String t = sc.next();
        sc.close();
        System.out.println(s.compareTo(t) < 0? "Yes" : "No");
    }
}