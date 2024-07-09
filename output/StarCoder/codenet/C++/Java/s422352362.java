import java.util.*;
public class s422352362 {
	public static void main(String[] args){
		Scanner sc = new Scanner(System.in);
		int n = sc.nextInt();
		long[] a = new long[n + 1];
		long[] pre = new long[n + 1];
		long[] last = new long[n + 1];
		for(int i = 1;i <= n;i++){
			a[i] = sc.nextLong();
		}
		long sumpre = 0,sumlast = 0;
		for(int i = 1;i <= n;i++){
			sumpre += a[i];
			pre[i] = sumpre;
		}
		for(int i = n;i >= 1;i--){
			sumlast += a[i];
			last[i] = sumlast;
		}
		long d = (long)(1e6);
		for(int i = 1;i <= n;i++){
			d = Math.min(d,Math.abs(pre[i] - last[i + 1]));
		}
		System.out.println(d);
	}
}