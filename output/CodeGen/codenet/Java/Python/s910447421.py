import java.io.*;
import java.math.*;
import java.util.*;

class Main {
	static int ans = 100;
	static int[][] balls;
	static int N;
	static boolean[] taken;
	
	public static void main(String[] args) {
		/*Fixate two coordinates in ordered pairs and extend same arithmetic difference for as 
		 * long as possible (sort coordinates first)
		 * Make connected graphs of coordinates that can be achieved with set p and q values
		 * */
		FastScanner I = new FastScanner(); //Input
		OutPut O = new OutPut(); //Output
		N = I.nextInt();
		ans=N;
		balls = new int[N][2];
		for (int i = 0; i < N; i++) {
			balls[i][0] = I.nextInt();
			balls[i][1] = I.nextInt();
		}
		Arrays.sort(balls,(a,b)->Integer.compare(a[0], b[0]));
		solve();
		for (int i = 0; i < N; i++) {
			int x = balls[i][0];
			int y = balls[i][1];
			balls[i][0]=y;
			balls[i][1]=x;
		}
		Arrays.sort(balls,(a,b)->Integer.compare(a[0], b[0]));
		solve();
		O.pln(ans);
	}
	public static void solve()