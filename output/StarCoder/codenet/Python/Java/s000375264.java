import java.util.*;
public class s000375264 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int X = sc.nextInt();
        int t = sc.nextInt();
        if (X > t) {
            System.out.println(X - t);
        } else {
            System.out.println(0);
        }
    }
}