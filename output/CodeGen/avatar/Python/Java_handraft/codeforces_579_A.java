import java.lang.Math;
import java.util.*;

public class codeforces_579_A {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int n = Integer.parseInt(scanner.nextLine());
        System.out.println(findMaxConsecutiveOnes(n));
    }
    public static int findMaxConsecutiveOnes(int n) {
        int x = 1;
        while (Math.log(n) / Math.log(2) != 0) {
            x += 1;
            n -= 2 << (int) (Math.log(n) / Math.log(2));
        }
        return x;
    }
}