import java.util.*;
public class s273727373 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int N = sc.nextInt();
        int[] A = new int[N];
        int[] B = new int[N];
        for(int i=0;i<N;i++){
            A[i] = sc.nextInt();
        }
        int count = 1;
        for(int i=0;i<N;i++){
            B[A[i]-1] = count;
            count++;
        }
        for(int i=0;i<N;i++){
            System.out.print(B[i]+" ");
        }
    }
}