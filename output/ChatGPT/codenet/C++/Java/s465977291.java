import java.util.Scanner;

public class s465977291 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int d = sc.nextInt();

        double a = d*2+1;
        System.out.println((int) Math.ceil(n/a));

        sc.close();
    }
}