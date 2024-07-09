import java.util.Scanner;
public class s669128523
{
	public static void main(String[] args)
	{
		Scanner in = new Scanner(System.in);
		int n,u,v;
		int M[][]=new int[100][100];
		int color[100]={0};
		int d[100]={0};
		int f[100]={0};
		int tt=0;
		
		n=in.nextInt();
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<n;j++)
				M[i][j]=0;
		}
		for(int i=0;i<n;i++)
		{
			u=in.nextInt();
			u--;
			for(int j=0;j<in.nextInt();j++)
			{
				v=in.nextInt();
				v--;
				M[u][v]=1;
			}
		}
		
		for(int i=0;i<n;i++)
			color[i]=0;
		tt=0;
		
		for(int i=0;i<n;i++)
		{
			if(color[i]==0)
			{
				color[i]=1;
				d[i]=++tt;
				for(int j=0;j<n;j++)
				{
					if(M[i][j]==1)
					{
						if(color[j]==0)
						{
							color[j]=2;
							f[j]=++tt;
						}
					}
				}
			}
		}
		
		for(int i=0;i<n;i++)
			System.out.println(i+1+" "+d[i]+" "+f[i]);
	}
}