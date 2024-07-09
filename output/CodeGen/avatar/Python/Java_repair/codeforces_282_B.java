import java.util.*;

public class codeforces_282_B {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int n = in.nextInt();
        int[] A = new int[n];
        int[] G = new int[n];
        for(int A_i=0; A_i < n; A_i++){
            A[A_i] = in.nextInt();
        }
        for(int G_i=0; G_i < n; G_i++){
            G[G_i] = in.nextInt();
        }
        int total = 0;
        String[] memory = new String[n];
        for(int i=0; i < n; i++){
            if(total + A[i] <= 500){
                total += A[i];
                memory[i] = "A";
            } else {
                total -= G[i];
                memory[i] = "G";
            }
        }
        System.out.println(Arrays.toString(memory));
    }
}