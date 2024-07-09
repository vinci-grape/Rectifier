import java.util.*;

public class codeforces_617_B {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int n = scanner.nextInt();
        System.out.println(hammingWeight(n));
    }
    public static int hammingWeight(int n) {
        int count = 0;
        while (n!= 0) {
            count += n & 1;
            n >>>= 1;
        }
        return count;
    }
}