import java.util.*;

public class s941927127 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String W = sc.next();
        char[] arr = W.toCharArray();
        Arrays.sort(arr);

        for (int i = 0; i < arr.length; i += 2) {
            if (arr[i] != arr[i + 1]) {
                System.out.println("No");
                return;
            }
        }
        System.out.println("Yes");
    }
}