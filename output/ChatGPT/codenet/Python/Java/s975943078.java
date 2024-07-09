import java.util.*;

public class s975943078 {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int N = scanner.nextInt();
        int K = scanner.nextInt();
        int[] A = new int[N];
        for (int i = 0; i < N; i++) {
            A[i] = scanner.nextInt() % K - 1;
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
            List<Integer> values = modK.get(key);
            int lenK = values.size();
            
            for (int i = 0; i < lenK; i++) {
                int a = values.get(i);
                count += binarySearch(values, a + K, i, lenK) - i - 1;
            }
        }
        
        System.out.println(count);
    }
    
    private static int binarySearch(List<Integer> list, int target, int start, int end) {
        int left = start;
        int right = end;
        
        while (left < right) {
            int mid = (left + right) / 2;
            
            if (list.get(mid) < target) {
                left = mid + 1;
            } else {
                right = mid;
            }
        }
        
        return left;
    }
}