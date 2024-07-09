import java.util.Scanner;
public class s860472409 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int N = sc.nextInt();
        int A[] = new int[N];
        for(int i = 0; i < N; i++) {
            A[i] = sc.nextInt();
        }
        int i = 0;
        int ans = 0;
        int count = 0;
        while(A[i+1] != null) {
            if(A[i] == A[i+1]) {
                count++;
                if(count%2 != 0)
                    ans++;
            }
            else
                count = 0;
            i++;
        }
        System.out.println(ans);
    }
}