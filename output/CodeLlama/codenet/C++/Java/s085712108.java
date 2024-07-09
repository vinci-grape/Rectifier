/*Lucky_Glass*/
import java.util.*;
public class s085712108
{
	static int MOD=7007;
	static int[][] F={{1,1,0},{1,0,1},{0,1,1},{2,0,0},{0,2,0},{0,0,2}};
	static int[] Hash=new int[MOD];
	static boolean HASH(int n)
	{
		for(int i=0;i<Hash[n%MOD];i++)
			if(n==Hash[n%MOD][i])
				return false;
		Hash[n%MOD].push(n);
		return true;
	}
	public static void main(String args[])
	{
		Queue<QUEUE> que=new LinkedList<QUEUE>();
		QUEUE Push=new QUEUE();
		int a,b,c;
		scanf("%d%d%d",&a,&b,&c);
		que.add(Push);
		while(!que.isEmpty())
		{
			QUEUE Fro=que.poll();
			if(Fro.a==Fro.b && Fro.b==Fro.c)
			{
				printf("%d\n",Fro.tot);
				return 0;
			}
			for(int i=0;i<6;i++)
			{
				Push=Fro;
				Push.tot++;
				Push.a+=F[i][0];Push.b+=F[i][1];Push.c+=F[i][2];
				int n=Push.a*10000+Push.b*100+Push.c;
				if(!HASH(n)) continue;
				que.add(Push);
			}
			que.remove();
		}
		return 0;
	}
}