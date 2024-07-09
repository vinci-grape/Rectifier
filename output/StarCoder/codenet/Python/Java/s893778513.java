import java.util.*;
public class s893778513 {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int[] l = new int[n];
        for (int i = 0; i < n; i++) {
            l[i] = sc.nextInt();
        }
        int b = 0, s = 0;
        for (int i = 0; i < n; i++) {
            if (l[i] > b) {
                b = l[i];
            }
            s += l[i];
        }
        if (b < s - b) {
            System.out.println("Yes");
        } else {
            System.out.println("No");
        }
    }
}