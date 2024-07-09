import java.util.*;

public class codeforces_30_A {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int A = in.nextInt();
        int B = in.nextInt();
        int n = in.nextInt();
        int result = 0;
        boolean flag = false;
        for (int i = -1000; i < 1001; i++) {
            if (A * (Math.pow(i, n)) == B) {
                result = i;
                flag = true;
                break;
            }
        }
        if (flag) {
            System.out.println(result);
        } else {
            System.out.println("No solution");
        }
    }
}