import java.util.*;

public class s975943078 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int N = sc.nextInt();
        int K = sc.nextInt();
        int[] A = new int[N];
        for (int i = 0; i < N; i++) {
            A[i] = (sc.nextInt() % K) - 1;
        }
        int[] sumA = new int[N + 1];
        int count = 0;
        Map<Integer, List<Integer>> modK = new HashMap<>();
        modK.put(0, new ArrayList<>());
        for (int i = 0; i < N; i++) {
            sumA[i + 1] = (sumA[i] + A[i]) % K;
            if (!modK.containsKey(sumA[i + 1])) {
                modK.put(sumA[i + 1], new ArrayList<>());
            }
            modK.get(sumA[i + 1]).add(i + 1);
        }
        for (int key : modK.keySet()) {
            List<Integer> list = modK.get(key);
            int lenK = list.size();
            for (int i = 0; i < lenK; i++) {
                count += Collections.frequency(list, list.get(i) + K) - i - 1;
            }
        }
        System.out.println(count);
    }
}