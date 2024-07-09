import java.util.*;
import java.lang.*;
import java.io.*;

public class atcoder_AGC021_B
{
	public static void main (String[] args) throws java.lang.Exception{
		Scanner sc = new Scanner(System.in);
		int N = sc.nextInt();
		int[] X = new int[N];
		int[] Y = new int[N];
		for(int i=0;i<N;i++){
			X[i] = sc.nextInt();
			Y[i] = sc.nextInt();
		}
		double[] D = new double[N];
		for(int i=0;i<N;i++){
			double sum = 0;
			for(int j=0;j<N;j++){
				if(i!=j){
					double x = X[i] - X[j];
					double y = Y[i] - Y[j];
					double d = Math.atan2(x,y);
					sum += d;
				}
			}
			D[i] = sum;
		}
		for(int i=0;i<N;i++){
			double sum = 0;
			for(int j=0;j<N;j++){
				if(i!=j){
					double x = X[i] - X[j];
					double y = Y[i] - Y[j];
					double d = Math.atan2(x,y);
					if(D[j]-d>=Math.PI){
						sum += (D[j]-d)-Math.PI;
					}
				}
			}
			System.out.println(sum/(2*Math.PI));
		}
	}
}