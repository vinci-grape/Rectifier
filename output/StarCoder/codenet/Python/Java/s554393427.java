import java.util.*;
public class s554393427 {
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        int n=sc.nextInt();
        double okz=0;
        for(int i=0;i<n;i++){
            double x=sc.nextDouble();
            String u=sc.next();
            if(u.equals("JPY"))
                okz+=x;
            else
                okz+=x*380000;
        }
        System.out.println(okz);
    }
}