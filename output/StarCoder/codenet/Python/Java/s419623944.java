import java.util.*;
public class s419623944 {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int N = sc.nextInt();
        int R = sc.nextInt();
        if (N >= 10) {
            System.out.println(R);
        } else {
            System.out.println(R + 100 * (10 - N));
        }
    }
}