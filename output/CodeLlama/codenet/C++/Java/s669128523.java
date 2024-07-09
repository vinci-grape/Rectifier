/*depth first search
not lie in stack
*/
import java.util.*;

public class s669128523 {
	static final int N=100;
	static final int WHITE=0;
	static final int GRAY=1;
	static final int BLACK=2;
	
	static int M[][]=new int[N][N];
	static int n;
	static int color[]=new int[N];
	static int d[]=new int[N];
	static int f[]=new int[N];
	static int tt;
	
	static void dfs_visit(int u){
		int v;
		color[u]=GRAY;
		d[u]=++tt;
		for(v=0;v<n;v++){
			if(M[u][v]==0)
				continue;
			if(color[v]==WHITE){
				dfs_visit(v);
			}
		}
		color[u]=BLACK;
		f[u]=++tt;
		
	}
	
	static void dfs(){
		int u;
		for(int i=0;i<n;i++){
			color[i]=WHITE;
		}
		tt=0;
		
		for(u=0;u<n;u++){
			if(color[u]==WHITE)
				dfs_visit(u);
		}
		
		for(int i=0;i<n;i++)
			System.out.println(i+1+" "+d[i]+" "+f[i]);
	}
	
	public static void main(String[] args){
		
		int k,u,v;
		Scanner sc=new Scanner(System.in);
		n=sc.nextInt();
		for(int i=0;i<n;i++){
			for(int j=0;j<n;j++)
				M[i][j]=0;
		}
		for(int i=0;i<n;i++){
			u=sc.nextInt();
			k=sc.nextInt();
			u--;
			for(int j=0;j<k;j++){
				v=sc.nextInt();
				v--;
				M[u][v]=1;
			}
		}
			
		dfs();	
		
	}
}