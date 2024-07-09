import java.util.*;

public class codeforces_274_A {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int num = sc.nextInt();
        int k = sc.nextInt();
        int[] arr = new int[num];
        Set<Integer> different = new HashSet<>();
        int temp = 0;
        for (int i = 0; i < num; i++) {
            arr[i] = sc.nextInt();
        }
        Arrays.sort(arr);
        for (int i = 0; i < num; i++) {
            if (arr[i] % k != 0 || !different.contains(arr[i] / k)) {
                different.add(arr[i]);
            }
            temp = Math.max(temp, different.size());
        }
        System.out.println(temp);
    }
}