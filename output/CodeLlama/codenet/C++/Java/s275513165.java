import java.util.Scanner;

public class s275513165 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String str = sc.next();
        if (str.charAt(2) == str.charAt(3) && str.charAt(4) == str.charAt(5)) System.out.println("Yes");
        else System.out.println("No");
    }
}