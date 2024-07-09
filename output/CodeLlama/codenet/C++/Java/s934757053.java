import java.util.Scanner;

public class s934757053 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int A, B;
        int ans=0;
        int out = 1;
        A = sc.nextInt();
        B = sc.nextInt();

        while(out<B){
            out--;
            out += A;
            ans++;
        }
        System.out.println(ans);
    }
}