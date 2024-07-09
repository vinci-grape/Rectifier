import java.util.Scanner;
import java.math.BigInteger;

public class s531812249 {
	
	public static void main(String[] args) {
		Scanner in = new Scanner(System.in);
		int n,m;
		n = in.nextInt();
		m = in.nextInt();
		
		int ans =0;
		// gu gu
		ans+= n*(n-1)/2;
		
		//kiki
		ans +=m*(m-1)/2;
		
		System.out.println(ans);
	}
}