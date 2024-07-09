import java.util.Scanner;
public class atcoder_ABC151_A {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String c = sc.next();
        String a = "abcdefghijklmnopqrstuvwxyz";
        int i = a.indexOf(c);
        System.out.println(a.charAt(i + 1));
    }
}