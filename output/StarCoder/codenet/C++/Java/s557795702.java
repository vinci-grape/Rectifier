import java.util.*;
import java.io.*;
public class s557795702 {
    public static void main(String[] args) {
        Scanner cin = new Scanner(System.in);
        int n = cin.nextInt();
        int[] a = new int[n];
        for(int i = 0; i < n; ++i) a[i] = cin.nextInt();
        System.out.println(mergesort(a,0,n));
    }
    public static int mergesort(int[] a,int left,int right){
        int mid;
        int v1,v2,v3;
        if(left + 1 < right){
            mid = (left+right)/2;
            v1 = mergesort(a,left,mid);
            v2 = mergesort(a,mid,right);
            v3 = merge(a,left,mid,right);
            return v1+v2+v3;
        }
        return 0;
    }
    public static int merge(int[] a,int left,int mid,int right){
        int i,j,k;
        int cnt = 0;
        int n1 = mid - left;
        int n2 = right - mid;
        int[] L = new int[n1+2];
        int[] R = new int[n2+2];
        for(i = 0; i < n1; ++i)	L[i] = a[left+i];
        for(i = 0; i < n2; ++i)	R[i] = a[mid+i];
        L[n1] = R[n2] = Integer.MAX_VALUE;
        i = j = 0;
        for(k = left; k < right; ++k){
            if(L[i] <= R[j]) a[k] = L[i++];
            else{
                a[k] = R[j++];
                cnt += n1-i;
            }
        }
        return cnt;
    }
}