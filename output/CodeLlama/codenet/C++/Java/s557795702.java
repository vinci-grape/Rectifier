import java.util.*;
import java.io.*;
public class s557795702 {
    public static void main(String[] args) throws IOException{
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        String[] str = br.readLine().split(" ");
        int n = Integer.parseInt(str[0]);
        int[] a = new int[n];
        for(int i = 0; i < n; ++i) a[i] = Integer.parseInt(str[i+1]);
        System.out.println(mergesort(a,0,n));
    }
    public static long mergesort(int[] a,int left,int right){
        if(left + 1 < right){
            int mid = (left+right)/2;
            long v1 = mergesort(a,left,mid);
            long v2 = mergesort(a,mid,right);
            long v3 = merge(a,left,mid,right);
            return v1+v2+v3;
        }
        return 0;
    }
    public static long merge(int[] a,int left,int mid,int right){
        int[] L = new int[mid-left];
        int[] R = new int[right-mid];
        int i,j,k;
        long cnt = 0;
        for(i = 0; i < mid-left; ++i) L[i] = a[left+i];
        for(i = 0; i < right-mid; ++i) R[i] = a[mid+i];
        L[mid-left] = R[right-mid] = Integer.MAX_VALUE;
        i = j = 0;
        for(k = left; k < right; ++k){
            if(L[i] <= R[j]) a[k] = L[i++];
            else{
                a[k] = R[j++];
                cnt += mid-left-i;
            }
        }
        return cnt;
    }
}