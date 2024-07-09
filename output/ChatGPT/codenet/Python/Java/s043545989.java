import java.util.*;
import java.io.*;

public class s043545989 {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        int N = Integer.parseInt(br.readLine());
        String[] input = br.readLine().split(" ");
        int[] a = new int[N];
        for (int i = 0; i < N; i++) {
            a[i] = Integer.parseInt(input[i]);
        }

        Map<Integer, Integer> B = new HashMap<>();
        for (int i : a) {
            if (B.containsKey(i)) {
                B.put(i, B.get(i) + 1);
            } else {
                B.put(i, 1);
            }
        }

        List<Integer> k = new ArrayList<>(B.keySet());
        List<Integer> v = new ArrayList<>(B.values());

        if (B.size() == 3 && (k.get(0) ^ k.get(1) ^ k.get(2)) == 0 && v.get(0) == v.get(1) && v.get(1) == v.get(2)) {
            System.out.println("Yes");
        } else if (B.size() == 2 && B.containsKey(0) && (v.get(0) == 2 * v.get(1) || v.get(1) == 2 * v.get(0))) {
            System.out.println("Yes");
        } else if (B.size() == 1 && B.containsKey(0)) {
            System.out.println("Yes");
        } else {
            System.out.println("No");
        }
    }
}