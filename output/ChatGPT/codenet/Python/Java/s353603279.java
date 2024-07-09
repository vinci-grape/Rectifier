import java.util.Scanner;

public class s353603279 {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int X = input.nextInt();
        int h = X / 500;
        int a = (X % 500) / 5;
        int y = h * 1000 + a * 5;
        System.out.println(y);
    }
}