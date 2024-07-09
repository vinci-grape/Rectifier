import java.math.BigInteger
import java.util.Random
import static java.lang.System

class Main {
	public static Random rand=new Random()
	
	public void run() {
		TCase:while(True) {
			W=sc.nextInt()
			H=sc.nextInt()
			if(W==0 and H==0)
				return
			map=[]
			for h in range(H):
				map.append(sc.next().encode('ascii'))
			dp=[[BigInteger(0)]*W for _ in range(H)]
			for h in range(H):
				for w in range(W):
					if map[h][w] in '0123456789':
						dp[h][w]=dp[h-1][w].multiply(BigInteger(10)).add(BigInteger(map[h][w]))
					else:
						dp[h][w]=BigInteger(0)
			max=BigInteger(0)
			for h in range(H):
				for w in range(W):
					if dp[h][w]>max:
						max=dp[h][w]
			print(max)
		}
	}
	public static void main(String[] args) {
		new Main().run()
	}
}