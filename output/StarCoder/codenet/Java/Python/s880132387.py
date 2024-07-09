import java.math.BigInteger;
import java.util.*;
import static java.lang.System.*;

class Main {
	public static Scanner sc = new Scanner(in);
	public static Random rand=new Random();

	public void run() {
		TCase:while(true){
			int W=sc.nextInt(),H=sc.nextInt();
			if(W==0 && H==0)return;
			char[][] map=new char[H][W];

			for(int h=0;h<H;h++){
				map[h]=sc.next().toCharArray();
			}

			BigInteger[][] dp=new BigInteger[H][W];

			for(int h=0;h<H;h++)for(int w=0;w<W;w++){
				BigInteger hprev=BigInteger.ZERO;
				if(h>=1){
					hprev=dp[h-1][w];
				}
				BigInteger wprev=BigInteger.ZERO;
				if(w>=1){
					wprev=dp[h][w-1];
				}
				if(Character.isDigit(map[h][w])){
					BigInteger max;
					if(hprev.compareTo(wprev)>0){
						max=hprev;
					}else{
						max=wprev;
					}
					dp[h][w]=max.multiply(BigInteger.TEN).add(new BigInteger(map[h][w]+""));
				}else{
					dp[h][w]=BigInteger.ZERO;
				}
			}
			BigInteger max=BigInteger.ZERO;
			for(int h=0;h<H;h++)for(int w=0;w<W;w++){
				if(dp[h][w].compareTo(max)>0)max=dp[h][w];
			}
			ln(max);
		}
	}
	public static void main(String[] args) {
		new Main().run();
	}

	public int[] nextIntArray(int n){
		int[] res=new int[n];
		for(int i=0;i<n;i++){
			res[i]=sc.nextInt();
		}
		return res;
	}
	public static void pr(Object o) {
		out.print(o);
	}
	public static void ln(Object o) {
		out.println(o);
	}
	public static void ln() {
		out.println();
	}
}