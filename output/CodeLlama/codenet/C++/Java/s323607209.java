import java.util.Scanner;
public class s323607209 {
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int k = sc.nextInt();
        long l = 0,r = 0;
        if(k%2==0){
            for(int i=1;i<=n;i++){
                if(i%k==k/2)l++;
                else if(i%k==0)r++;
            }
            System.out.println(l*l*l+r*r*r);
        }
        else{
            for(int i=1;i<=n;i++){
                if(i%k==0)r++;
            }
            System.out.println(r*r*r);
        }
    }
}