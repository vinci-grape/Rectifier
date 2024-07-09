import java.util.*;
public class s107204188 {

    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int n = in.nextInt();
        int t = in.nextInt();
        int[] A = new int[n];
        int minA = Integer.MAX_VALUE;
        int num = 0;
        int f = 0;
        for(int i = 0; i < n; i++){
            A[i] = in.nextInt();
            if(minA > A[i]){
                minA = A[i];
            }else{
                if(f == A[i] - minA)num++;
                else if(f < A[i] - minA){
                    num = 1;
                    f = A[i] - minA;
                }
            }
        }
        System.out.println(num);
    }
}