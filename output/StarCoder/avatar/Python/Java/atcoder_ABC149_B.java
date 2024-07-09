import java.util.*;
public class atcoder_ABC149_B {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int[] cookies = new int[3];
        for (int i = 0; i < 3; i++) {
            cookies[i] = sc.nextInt();
        }
        int leftOver = cookies[0] - cookies[2];
        int takahashi = Math.max(0, leftOver);
        System.out.println(takahashi + " " + (cookies[1] > 0? cookies[1] : Math.max(0, cookies[1] - Math.abs(leftOver))));
    }
}