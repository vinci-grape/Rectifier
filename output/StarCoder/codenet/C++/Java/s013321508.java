import java.util.*;
import java.io.*;

public class s013321508 {

    public static void main(String[] args) {

        Scanner sc = new Scanner(System.in);
        int N = sc.nextInt();
        int M = sc.nextInt();

        int[] L = new int[100000];
        for (int i = 0; i < N; i++) {
            L[i] = sc.nextInt();
        }

        Arrays.sort(L);

        for (int i = 0; i < M; i++) {
            int max_L = L[L.length - 1];
            if (max_L == 0) {
                break;
            }

            max_L /= 2;
            int index = Arrays.binarySearch(L, max_L);
            if (index < 0) {
                index = -index - 1;
            }
            L = Arrays.copyOf(L, L.length + 1);
            System.arraycopy(L, index, L, index + 1, L.length - index - 1);
            L[index] = max_L;
            L[L.length - 1] = 0;
        }

        long ans = 0;
        for (int i = 0; i < L.length; i++) {
            ans += L[i];
        }

        System.out.println(ans);

    }

}