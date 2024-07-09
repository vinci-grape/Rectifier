import java.util.*;
public class s447383972 {
	public static void main(String[] args){
		Scanner cin=new Scanner(System.in);
		int n=cin.nextInt();
		int[] a=new int[n+1];
		for(int i=1;i<=n;i++)	a[i]=cin.nextInt();
		Arrays.sort(a);
		int tot=0;
		for(int i=1;i<=n;i++)
			if(a[i]==a[i+1])	q[++tot]=a[i],i++;
		System.out.println(q[tot]*q[tot-1]);
	}
}