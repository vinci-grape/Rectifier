import java.util.*;
import java.lang.*;
import java.io.*;

public class s123678341
{
	public static void main (String[] args) throws java.lang.Exception{
		Scanner sc = new Scanner(System.in);
		int X = sc.nextInt();
		int Y = sc.nextInt();
		int Z = sc.nextInt();
		int K = sc.nextInt();
		
		int[] A = new int[X];
		int[] B = new int[Y];
		int[] C = new int[Z];
		
		for(int i=0; i<X; i++){
			A[i] = sc.nextInt();
		}
		for(int i=0; i<Y; i++){
			B[i] = sc.nextInt();
		}
		for(int i=0; i<Z; i++){
			C[i] = sc.nextInt();
		}
		
		Arrays.sort(A);
		Arrays.sort(B);
		Arrays.sort(C);
		
		ArrayList<Integer> AB = new ArrayList<Integer>();
		for(int i=0; i<X; i++){
			for(int j=0; j<Y; j++){
				AB.add(A[i]+B[j]);
			}
		}
		
		Collections.sort(AB);
		ArrayList<Integer> ABC = new ArrayList<Integer>();
		for(int i=0; i<min(K, AB.size()); i++){
			for(int j=0; j<Z; j++){
				ABC.add(AB.get(i)+C[j]);
			}
		}
		
		Collections.sort(ABC);
		for(int i=0; i<K; i++){
			System.out.println(ABC.get(i));
		}
	}
}