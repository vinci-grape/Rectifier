import java.util.Scanner;

public class s142939923 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int a = sc.nextInt();
        int b = sc.nextInt();
        int[] x = new int[3];
        x[0] = a + b;
        x[1] = a - b;
        x[2] = a * b;
        System.out.println(Math.max(x[0], x[1], x[2]));
    }
}