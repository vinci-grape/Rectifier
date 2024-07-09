import java.util.Scanner;
public class codeforces_340_A {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String[] l = sc.nextLine().split(" ");
        int x = Integer.parseInt(l[0]);
        int y = Integer.parseInt(l[1]);
        int a = Integer.parseInt(l[2]);
        int b = Integer.parseInt(l[3]);
        int lcm = L(x, y);
        System.out.println(b / lcm - (a - 1) / lcm);
    }
    public static int L(int x, int y) {
        return x * y / G(x, y);
    }
    public static int G(int a, int b) {
        while (a % b != 0) {
            a = b;
            b = a % b;
        }
        return b;
    }
}