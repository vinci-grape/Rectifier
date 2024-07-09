import java.util.Scanner;
public class s398580870 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int k = sc.nextInt();
        if(k%2==1){
            System.out.println((n/k)*(n/k)*(n/k));
        }else{
            System.out.println((n/k)*(n/k)*(n/k)+((n+k/2)/k)*(n+k/2)/k)*(n+k/2)/k);
        }
    }
}