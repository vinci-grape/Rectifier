import java.util.Scanner;
import java.util.Arrays;
public class s360529905
{
	public static void main(String[] args)
	{
		Scanner scan=new Scanner(System.in);
		int N=scan.nextInt();
		int[] a=new int[N];
		int[] b=new int[N];
		for(int i=0;i<N;i++)
		{
			a[i]=scan.nextInt();
			b[i]=a[i];
		}
		Arrays.sort(b);
		int frontHalf=b[N/2-1];
		int backHalf=b[N/2];
		for(int i=0;i<N;i++)
		{
			if(a[i]<backHalf)
				System.out.println(backHalf);
			else
				System.out.println(frontHalf);
		}
	}
}