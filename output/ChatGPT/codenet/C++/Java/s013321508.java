import java.util.Scanner;
import java.util.Arrays;

public class s013321508 {

    public static void main(String[] args) {

        Scanner sc = new Scanner(System.in);

        int N = sc.nextInt();
        int M = sc.nextInt();

        int[] L = new int[100000];
        for (int i = 0; i < N; i++) {
            int l = sc.nextInt();
            L[i] = l;
        }

        Arrays.sort(L);

        for (int i = 0; i < M; i++) {
            int max_L = L[L.length - 1];
            if (max_L == 0) {
                break;
            }

            max_L /= 2;
            int index = Arrays.binarySearch(L, max_L);
            index = (index >= 0) ? index : -index - 1;
            int[] newL = new int[L.length + 1];
            System.arraycopy(L, 0, newL, 0, index);
            newL[index] = max_L;
            System.arraycopy(L, index, newL, index + 1, L.length - index - 1);
            L = newL;
            L = Arrays.copyOfRange(L, 0, L.length - 1);
        }

        long ans = 0;
        for (int i = 0; i < L.length; i++) {
            ans += L[i];
        }

        System.out.println(ans);
    }
}