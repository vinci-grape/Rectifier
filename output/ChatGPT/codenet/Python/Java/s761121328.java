import java.util.Scanner;

public class s761121328 {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int N = input.nextInt();
        int[] A = new int[N];
        
        for (int i = 0; i < N; i++) {
            A[i] = input.nextInt();
        }
        
        int s = A[0] ^ A[1];
        for (int i = 2; i < N; i++) {
            s = s ^ A[i];
        }
        
        int[] B = new int[N];
        for (int i = 0; i < N; i++) {
            B[i] = s ^ A[i];
        }
        
        StringBuilder sb = new StringBuilder();
        for (int i = 0; i < N; i++) {
            sb.append(B[i]);
            sb.append(" ");
        }
        
        System.out.println(sb.toString().trim());
    }
}