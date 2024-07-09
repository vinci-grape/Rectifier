import java.util.*;

public class codeforces_672_A {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int n = scanner.nextInt();
        System.out.println(findNthDigit(n));
        
    }
    public static int findNthDigit(int n) {
        int[] digits = new int[10];
        int[] temp = new int[10];
        int[] li = new int[10];
        int count = 0;
        int p = 1;
        int q = 1;
        for (int i = 1; i < 371; i++) {
            count = 0;
            while (p!= 0) {
                p = p / 10;
                count += 1;
            }
            if (count == 1) {
                digits[i] = i;
            }
            if (count == 2) {
                temp = new int[10];
                while (q!= 0) {
                    x = q % 10;
                    q = q / 10;
                    temp[count - 2] = x;
                }
                li = li + temp[ : : - 1];
            }
            if (count == 3) {
                temp = new int[10];
                while (q!= 0) {
                    x = q % 10;
                    q = q / 10;
                    temp[count - 2] = x;
                }
                li = li + temp[ : : - 1];
            }
        }
        li.pop();
        li.pop();
        n = n - 1;
        return li[n];
    }
}