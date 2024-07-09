import java.util.*;
public class s754383079 {
	public static void main(String[] args) {
		Scanner sc=new Scanner(System.in);
		String a=sc.next();
		String b=sc.next();
		int n=a.length();
		int m=b.length();
		int ans=n+m+10;
		for(int i=0;i+m<=n;i++)
		{
			int sum=0;
			for(int j=0;j<m;j++)
				if(a.charAt(i+j)!=b.charAt(j))
					sum++;
			ans=Math.min(ans,sum);
		}
		System.out.println(ans);
	}
}