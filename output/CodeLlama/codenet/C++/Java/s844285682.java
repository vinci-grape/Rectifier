import java.util.Scanner;

public class s844285682 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int a = sc.nextInt();
        int h = a / 3600;
        int m = (a % 3600) / 60;
        int s = (a % 3600) % 60;
        System.out.println(h + ":" + m + ":" + s);
    }
}