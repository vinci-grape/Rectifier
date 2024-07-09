/*Lucky_Glass*/
import java.util.*;
public class s085712108 {
	public static void main(String[] args)
	{
		Scanner cin=new Scanner(System.in);
		int a=cin.nextInt(),b=cin.nextInt(),c=cin.nextInt();
		int tot=0;
		Queue<Integer> que=new LinkedList<Integer>();
		que.add(a*10000+b*100+c);
		while(!que.isEmpty())
		{
			int fro=que.poll();
			if(fro/10000==fro/100%10==fro%10)
			{
				System.out.println(tot);
				return;
			}
			for(int i=0;i<6;i++)
			{
				int n=fro/10000+fro/100%10+fro%10;
				if(n%7007==0) continue;
				n=n*10000+F[i][0]*100+F[i][1]*10+F[i][2];
				if(n%7007==0) continue;
				n=n*10000+F[i][0]*100+F[i][2]*10+F[i][1];
				if(n%7007==0) continue;
				n=n*10000+F[i][1]*100+F[i][0]*10+F[i][2];
				if(n%7007==0) continue;
				n=n*10000+F[i][1]*100+F[i][2]*10+F[i][0];
				if(n%7007==0) continue;
				n=n*10000+F[i][2]*100+F[i][0]*10+F[i][1];
				if(n%7007==0) continue;
				n=n*10000+F[i][2]*100+F[i][1]*10+F[i][0];
				if(n%7007==0) continue;
				if(n%7007==0) continue;
				que.add(n);
			}
			tot++;
		}
	}
	static int[] F={111,110,101,100,011,010,001,000};
}