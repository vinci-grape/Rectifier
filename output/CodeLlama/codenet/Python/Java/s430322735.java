import java.util.Scanner;

public class s430322735 {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        String[] arr = new String[n];
        int[] cnt = new int[n];
        for (int i = 0; i < n; i++) {
            arr[i] = sc.next();
            cnt[i] = 1;
        }
        for (int i = 0; i < n - 1; i++) {
            for (int j = i + 1; j < n; j++) {
                if (arr[i].compareTo(arr[j]) == 0) {
                    cnt[i]++;
                    cnt[j] = 0;
                }
            }
        }
        int sum = 0;
        for (int i = 0; i < n; i++) {
            sum += cnt[i] * (cnt[i] + 1) / 2;
        }
        System.out.println(sum);
    }
}