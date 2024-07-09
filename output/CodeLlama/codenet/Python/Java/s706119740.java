import java.util.*;
public class s706119740 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int[] candy = new int[3];
        for (int i = 0; i < 3; i++) {
            candy[i] = sc.nextInt();
        }
        if (candy[0] + candy[1] == candy[2]) {
            System.out.println("Yes");
        } else {
            System.out.println("No");
        }
    }
}