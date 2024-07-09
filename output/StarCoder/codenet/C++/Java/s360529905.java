import java.util.*;
public class s360529905 {
	public static void main(String[] args){
		Scanner sc=new Scanner(System.in);
		int N=sc.nextInt();
		int[] a=new int[N];
		int[] b=new int[N];
		for(int i=0;i<N;i++)
			a[i]=sc.nextInt();
		for(int i=0;i<N;i++)
			b[i]=a[i];
		Arrays.sort(b);
		int frontHalf=b[N/2-1];
		int backHalf=b[N/2];
		for(int i=0;i<N;i++)
			System.out.println(Math.min(backHalf,frontHalf));
	}
}