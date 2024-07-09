import java.util.*;
import java.lang.*;

public class s763208424 {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int n = input.nextInt();
        int m = input.nextInt();
        PriorityQueue<Integer> a = new PriorityQueue<>(Collections.reverseOrder());

        for (int i = 0; i < n; i++) {
            a.add(-input.nextInt());
        }

        for (int i = 0; i < m; i++) {
            int x = a.poll();
            a.add(-(x / 2));
        }

        int sum = 0;
        for (int num : a) {
            sum += num;
        }

        System.out.println(-sum);
    }
}