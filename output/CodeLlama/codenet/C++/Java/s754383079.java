import java.util.*;
import java.io.*;

public class s754383079
{
	public static void main(String args[]) throws IOException
	{
		BufferedReader br=new BufferedReader(new InputStreamReader(System.in));
		String a=br.readLine();
		String b=br.readLine();
		int n=a.length(),m=b.length(),ans=n+m+10;
		for(int i=0;i+m-1<n;i++)
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