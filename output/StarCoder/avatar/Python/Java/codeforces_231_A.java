import java.util.*;
public class codeforces_231_A {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int c = 0;
        for (int i = 0; i < n; i++) {
            int[] l1 = new int[sc.nextInt()];
            for (int j = 0; j < l1.length; j++) {
                l1[j] = sc.nextInt();
            }
            if (Arrays.stream(l1).sum() > 1) {
                c++;
            }
        }
        System.out.println(c);
    }
}