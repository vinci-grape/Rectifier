import java.util.Scanner;
public class s280552889 {
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        int N=sc.nextInt();
        if(N%2==0)
            System.out.println(N/2);
        else
            System.out.println((N+1)/2);
    }
}