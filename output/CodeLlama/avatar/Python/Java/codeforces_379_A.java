import java.util.Scanner;
public class codeforces_379_A {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int a = sc.nextInt();
        int b = sc.nextInt();
        int s = 0;
        int restoSciolte = 0;
        while (a > 0 || restoSciolte >= b) {
            a += restoSciolte / b;
            restoSciolte %= b;
            s += a;
            restoSciolte += a % b;
            a /= b;
        }
        System.out.println(s);
    }
}