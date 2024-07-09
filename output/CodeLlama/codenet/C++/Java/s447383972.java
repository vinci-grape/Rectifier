import java.util.Scanner;
import java.util.Arrays;
public class s447383972 {
	public static void main(String args[]){
		Scanner sc=new Scanner(System.in);
		int n=sc.nextInt();
		int[] a=new int[n+1];
		for(int i=1;i<=n;i++)
			a[i]=sc.nextInt();
		Arrays.sort(a);
		int tot=0;
		for(int i=1;i<=n;i++)
			if(a[i]==a[i+1])
				a[++tot]=a[i],i++;
		System.out.println(a[tot]*a[tot-1]);
	}
}