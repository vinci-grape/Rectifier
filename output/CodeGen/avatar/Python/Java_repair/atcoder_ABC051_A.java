import java.util.*;

public class atcoder_ABC051_A {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        String S = in.nextLine();
        String[] str = S.split(" ");
        int n = str.length;
        int[] arr = new int[n];
        for(int i=0;i<n;i++){
            arr[i] = Integer.parseInt(str[i]);
        }
        int[] arr2 = new int[n];
        for(int i=0;i<n;i++){
            arr2[i] = arr[i];
        }
        int[] arr3 = new int[n];
        for(int i=0;i<n;i++){
            arr3[i] = arr2[i];
        }
        for(int i=0;i<n;i++){
            arr3[i] = arr3[i]*2;
        }
        for(int i=0;i<n;i++){
            arr3[i] = arr3[i]*2;
        }
        for(int i=0;i<n;i++){
            arr3[i] = arr3[i]/2;
        }
        for(int i=0;i<n;i++){
