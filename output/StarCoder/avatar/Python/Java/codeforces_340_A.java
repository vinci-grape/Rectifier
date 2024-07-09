import java.util.Scanner;
public class codeforces_340_A {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int x = sc.nextInt();
        int y = sc.nextInt();
        int a = sc.nextInt();
        int b = sc.nextInt();
        int lcm = x * y / GCD(x, y);
        System.out.println(b / lcm - (a - 1) / lcm);
    }
    public static int GCD(int a, int b) {
        while (a % b!= 0) {
            int temp = a;
            a = b;
            b = temp % b;
        }
        return b;
    }
}
