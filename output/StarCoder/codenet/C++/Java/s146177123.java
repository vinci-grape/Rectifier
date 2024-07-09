import java.util.*;
import java.io.*;

public class s146177123 {

	public static void main(String[] args) {
		Scanner sc=new Scanner(System.in);
		while(true){
			int n=sc.nextInt();
			if(n==-1)break;
			boolean[] st=new boolean[7];
			for(int i=0;i<n;i++){
				int t=sc.nextInt();
				char[] ans=new char[8];
				for(int j=0;j<7;j++){
					ans[j]=st[j]^seg[t][j]?'1':'0';
					st[j]=seg[t][j];
				}
				System.out.println(new String(ans));
			}
		}
	}
	static boolean[][] seg=new boolean[][]{
		{0,1,1,1,1,1,1},
		{0,0,0,0,1,1,0},
		{1,0,1,1,0,1,1},
		{1,0,0,1,1,1,1},
		{1,1,0,0,1,1,0},
		
		{1,1,0,1,1,0,1},
		{1,1,1,1,1,0,1},
		{0,1,0,0,1,1,1},
		{1,1,1,1,1,1,1},
		{1,1,0,1,1,1,1}
	};
}