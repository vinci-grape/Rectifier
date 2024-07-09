import java.util.Scanner;
import java.util.Arrays;
import java.util.HashMap;
import java.util.Map;

public class s957164965 {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int X = sc.nextInt();
        int N = sc.nextInt();
        int[] p = new int[N];
        for (int i = 0; i < N; i++) {
            p[i] = sc.nextInt();
        }
        sc.close();

        Map<Integer, Integer> candidates = new HashMap<>();
        for (int i = -1; i < 102; i++) {
            if (Arrays.binarySearch(p, i) >= 0) {
                continue;
            }
            if (!candidates.containsKey(Math.abs(X - i))) {
                candidates.put(Math.abs(X - i), i);
            } else {
                candidates.put(Math.abs(X - i), Math.min(candidates.get(Math.abs(X - i)), i));
            }
        }

        int smallest = Integer.MAX_VALUE;
        for (int i : candidates.keySet()) {
            smallest = Math.min(smallest, i);
        }

        System.out.println(candidates.get(smallest));
    }
}