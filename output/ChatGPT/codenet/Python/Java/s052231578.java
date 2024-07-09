import java.util.Scanner;
import java.util.Arrays;

public class s052231578 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int N = sc.nextInt();
        int[] arr = {111, 222, 333, 444, 555, 666, 777, 888, 999};
        int ansIdx = Arrays.binarySearch(arr, N);
        if (ansIdx < 0) {
            ansIdx = -ansIdx - 1;
        }
        System.out.println(arr[ansIdx]);
    }
}