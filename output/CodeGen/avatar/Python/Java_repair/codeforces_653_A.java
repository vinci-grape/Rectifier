import java.util.*;

public class codeforces_653_A {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int n = in.nextInt();
        int[] arr = new int[n];
        for(int arr_i=0; arr_i < n; arr_i++){
            arr[arr_i] = in.nextInt();
        }
        Arrays.sort(arr);
        for(int i=0; i<n-1; i++){
            if(arr[i] + 1 == arr[i+1] && arr[i] + 2 == arr[i+2]){
                System.out.println("YES");
                break;
            }
        }
        if(n-1 == i){
            System.out.println("NO");
        }
    }
}