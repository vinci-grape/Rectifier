import java.util.*;

public class codeforces_67_B {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int n = in.nextInt();
        int k = in.nextInt();
        int[] M = new int[n];
        for(int M_i=0; M_i < n; M_i++){
            M[M_i] = in.nextInt();
        }
        int m = 0;
        for(int j=0; j < n; j++){
            for(int p=0; p < n; p++){
                if(0 == M[p]){
                    System.out.print(p+1+" ");
                    break;
                }
            }
            for(int l=0; l < p-k; l++){
                M[l] -= 1;
            }
            M[p] -= 1;
        }
    }
}