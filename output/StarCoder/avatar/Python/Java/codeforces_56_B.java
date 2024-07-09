import java.util.*;
public class codeforces_56_B {

    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int N = in.nextInt();
        int[] A = new int[N];
        for(int i=0;i<N;i++){
            A[i] = in.nextInt();
        }
        int mn = N+1, mx = -1;
        for(int i=0;i<N;i++){
            if(i+1!= A[i]){
                mn = Math.min(mn, i);
                mx = Math.max(mx, i);
            }
        }
        if(mx == -1){
            System.out.println("0 0");
        }else{
            A = Arrays.copyOfRange(A, 0, mn);
            A = Arrays.copyOfRange(A, mn, mx+1);
            A = Arrays.copyOfRange(A, 0, mx+1);
            Arrays.sort(A);
            if(Arrays.equals(A, A)){
                System.out.println(mn+1 + " " + mx+1);
            }else{
                System.out.println("0 0");
            }
        }
    }
}