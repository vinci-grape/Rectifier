import java.util.Arrays;
import java.util.Scanner;

public class codeforces_351_A {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int n = scanner.nextInt();
        double[] arr = new double[n];
        
        for (int i = 0; i < n; i++) {
            arr[i] = scanner.nextDouble();
        }
        
        Arrays.sort(arr);
        double[] newArr = new double[n];
        int index = 0;
        
        for (int i = 0; i < n; i++) {
            if (arr[i] - (int) arr[i] != 0) {
                newArr[index++] = arr[i] - (int) arr[i];
            }
        }
        
        int o = 2 * n - index;
        double arrSum = 0;
        
        for (int i = 0; i < index; i++) {
            arrSum += newArr[i];
        }
        
        int res = (int) 2e9;
        
        for (int i = 0; i <= n; i++) {
            if (i + o >= n) {
                res = Math.min(res, Math.abs(i - arrSum));
            }
        }
        
        System.out.printf("%.3f", (double) res);
    }
}