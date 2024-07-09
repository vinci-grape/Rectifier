import java.util.Scanner;

public class atcoder_ABC123_C {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int N = scanner.nextInt();
        int[] A = new int[5];
        
        for (int i = 0; i < 5; i++) {
            A[i] = scanner.nextInt();
        }
        
        int result = (int) Math.ceil((double) N / min(A)) + 4;
        System.out.println(result);
    }
    
    public static int min(int[] arr) {
        int minVal = arr[0];
        
        for (int i = 1; i < arr.length; i++) {
            if (arr[i] < minVal) {
                minVal = arr[i];
            }
        }
        
        return minVal;
    }
}