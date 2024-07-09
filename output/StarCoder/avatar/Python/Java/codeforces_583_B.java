import java.util.*;
public class codeforces_583_B {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int[] a = new int[n];
        for (int i = 0; i < n; i++) {
            a[i] = sc.nextInt();
        }
        int current_level = 0;
        int counter = 0;
        int counter_turns = -1;
        while (counter < n) {
            counter_turns += 1;
            for (int i = 0; i < n; i++) {
                if (a[i]!= -1 && a[i] <= counter) {
                    counter += 1;
                    a[i] = -1;
                }
            }
            for (int i = 0; i < n; i++) {
                if (a[i]!= -1) {
                    a[i] = -1;
                }
            }
        }
        System.out.println(counter_turns);
    }
}