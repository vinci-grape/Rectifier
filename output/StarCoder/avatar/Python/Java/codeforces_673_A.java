import java.util.*;
public class codeforces_673_A {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int[] arr = new int[n];
        for (int i = 0; i < n; i++) {
            arr[i] = sc.nextInt();
        }
        if (arr[0] > 15) {
            System.out.println(15);
        } else {
            for (int i = 1; i < n; i++) {
                if (arr[i] - arr[i - 1] > 15) {
                    System.out.println(arr[i - 1] + 15);
                    break;
                }
            } else {
                if (arr[n - 1] == 90 || arr[n - 1] + 15 >= 90) {
                    System.out.println(90);
                } else {
                    System.out.println(arr[n - 1] + 15);
                }
            }
        }
    }
}