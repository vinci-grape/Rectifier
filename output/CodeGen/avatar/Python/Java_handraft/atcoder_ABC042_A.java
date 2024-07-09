import java.util.*;

public class atcoder_ABC042_A {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int[] A = new int[3];
        for (int i = 0; i < 3; i++) {
            A[i] = in.nextInt();
        }
        int sum = 0;
        int count = 0;
        for (int i = 0; i < 3; i++) {
            if (A[i] == 5) {
                count++;
            }
            sum += A[i];
        }
        if (count == 2) {
            System.out.println(sum == 17? "YES" : "NO");
        } else {
            System.out.println("NO");
        }
    }
}