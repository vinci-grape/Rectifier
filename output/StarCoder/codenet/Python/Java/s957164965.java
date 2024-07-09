import java.util.*;

public class s957164965 {

    public static void main(String[] args) {

        Scanner sc = new Scanner(System.in);

        int X = sc.nextInt();
        int N = sc.nextInt();

        int[] p = new int[N];

        for (int i = 0; i < N; i++) {
            p[i] = sc.nextInt();
        }

        Arrays.sort(p);

        Map<Integer, List<Integer>> candidates = new HashMap<>();

        for (int i = -1; i <= 102; i++) {

            if (Arrays.binarySearch(p, i) >= 0) {
                continue;
            }

            if (!candidates.containsKey(Math.abs(X - i))) {
                candidates.put(Math.abs(X - i), new ArrayList<>());
            }

            candidates.get(Math.abs(X - i)).add(i);
        }

        int smallest = Integer.MAX_VALUE;

        for (int key : candidates.keySet()) {
            if (smallest > key) {
                smallest = key;
            }
        }

        System.out.println(candidates.get(smallest).get(0));
    }
}