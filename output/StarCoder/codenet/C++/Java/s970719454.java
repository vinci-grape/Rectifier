import java.util.*;

public class s970719454 {

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		while(true){
			int n = sc.nextInt();
			int m = sc.nextInt();
			if(n==0)break;
			
			boolean dpflg = false;
			
			int[] here = new int[100001];
			int[] dp1 = new int[100001];
			int[] dp2 = new int[100001];
			
			rep(i,100001)here[i]=dp1[i]=dp2[i]=0;
			
			rep(i,m){
				int a = sc.nextInt();
				if(a==0) dpflg=true;
				
				here[a]=1;
			}
			
			int maxi1 = 0;
			int maxi2 = 0;
			
			rep(i,1,n+1){
				if(here[i]==1)dp1[i] = dp1[i-1]+1;
				maxi1 = max(dp1[i], maxi1);
			}
			
			rep(i,1,n+1){
				if(here[i]==1)dp2[i] = dp2[i-1]+1;
				else dp2[i] = dp1[i-1]+1;
				maxi2 = max(dp2[i], maxi2);
			}
			
			if(!dpflg){
				System.out.println(maxi1);
			}else{
				System.out.println(maxi2);
			}
		}
	}

}