import java.util.*;
public class s800506321 {

    public static void main(String[] args) {
		Scanner sc=new Scanner(System.in);
		int n,k,x,y,z;
		n=sc.nextInt();
		k=sc.nextInt();
		x=n/k;
		y=n%k;
		if(y!=0) {
			z=x+1-x;
		}
		else {
			z=x-x;
		}
		System.out.println(z);
    }
}