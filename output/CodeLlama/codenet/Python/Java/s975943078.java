import java.util.*;

public class s975943078 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int N = sc.nextInt();
        int K = sc.nextInt();
        int[] A = new int[N];
        for (int i = 0; i < N; i++) {
            A[i] = sc.nextInt() % K;
        }
        int[] sum_A = new int[N + 1];
        int count = 0;
        Map<Integer, List<Integer>> modK = new HashMap<>();
        modK.put(0, new ArrayList<>());
        modK.get(0).add(0);
        for (int i = 0; i < N; i++) {
            sum_A[i + 1] = (sum_A[i] + A[i]) % K;
            if (!modK.containsKey(sum_A[i + 1])) {
                modK.put(sum_A[i + 1], new ArrayList<>());
            }
            modK.get(sum_A[i + 1]).add(i + 1);
        }
        for (int key : modK.keySet()) {
            List<Integer> list = modK.get(key);
            for (int i = 0; i < list.size(); i++) {
                int a = list.get(i);
                count += Collections.binarySearch(list, a + K, i + 1, list.size()) - i - 1;
            }
        }
        System.out.println(count);
    }
}