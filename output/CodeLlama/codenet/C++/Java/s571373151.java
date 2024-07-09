import java.util.Scanner;
import java.util.Vector;

public class s571373151 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int m = sc.nextInt();

        Vector<Integer> foods = new Vector<Integer>(m);

        for (int i = 0; i < n; i++) {
            int k = sc.nextInt();

            for (int j = 0; j < k; j++) {
                int temp = sc.nextInt();
                temp--;

                foods.set(temp, foods.get(temp) + 1);
            }
        }

        int ans = 0;
        for (int elem : foods) {
            if (elem == n) {
                ans++;
            }
        }

        System.out.println(ans);
    }
}