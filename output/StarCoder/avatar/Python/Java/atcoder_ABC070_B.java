import java.util.*;
public class atcoder_ABC070_B {

    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        int[] A = new int[4];
        for(int i = 0; i < 4; i++)
            A[i] = scan.nextInt();
        if(A[1] <= A[2] || A[3] <= A[0])
            System.out.println(0);
        else{
            Arrays.sort(A);
            System.out.println(A[2] - A[1]);
        }
    }
}