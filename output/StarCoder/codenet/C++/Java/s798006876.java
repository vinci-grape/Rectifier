import java.util.*;
public class s798006876 {
	public static void main(String[] args){
		Scanner cin=new Scanner(System.in);
		while(cin.hasNext()){
			int m=cin.nextInt();
			int nmi=cin.nextInt();
			int nma=cin.nextInt();
			if(nmi==0)break;
			int[] data=new int[m];
			for(int i=0;i<m;i++)data[i]=cin.nextInt();
			int ma=0;
			int ans=0;
			for(int i=nmi-1;i<nma;i++){
				if(ma<=data[i]-data[i+1]){
					ans=i+1;
					ma=data[i]-data[i+1];
				}
			}
			System.out.println(ans);
		}
	}
}