import java.util.*;

public class codeforces_108_B {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int n = in.nextInt();
        int[] arr = new int[n];
        for(int arr_i=0; arr_i < n; arr_i++){
            arr[arr_i] = in.nextInt();
        }
        in.close();
        Arrays.sort(arr);
        for(int i=1; i<n; i++){
            if(arr[i]!= arr[i-1] && arr[i] < arr[i-1]*2){
                System.out.println("YES");
                return;
            }
        }
        System.out.println("NO");
    }
}