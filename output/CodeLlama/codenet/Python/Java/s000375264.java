import java.util.Scanner;

public class s000375264 {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int X = sc.nextInt();
        int t = sc.nextInt();
        int answer = 0;
        if (X > t) {
            answer = X - t;
        } else if (X <= t) {
            answer = 0;
        }
        System.out.println(answer);
    }
}