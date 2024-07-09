import java.util.*;

public class codeforces_276_B {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int n = in.nextInt();
        int[] arr = new int[n];
        for(int arr_i=0; arr_i < n; arr_i++){
            arr[arr_i] = in.nextInt();
        }
        int[] dt = new int[101];
        for(int i=0; i < n; i++){
            if(arr[i] < 100){
                dt[arr[i]]++;
            }
        }
        boolean x = true;
        for(int key : dt){
            if(key % 2!= 0){
                x = false;
                break;
            }
        }
        if(x){
            System.out.println("First");
        }else if(!x && arr.length % 2 == 0){
            System.out.println("Second");
        }else if(!x && arr.length % 2!= 0){
            System.out.println("First");
        }
    }
}