import java.util.*;
import java.io.*;




public class Main 
{
	
	public static void main(String[] args) throws IOException 
	{ 
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		PrintWriter pw = new PrintWriter(new BufferedWriter(new OutputStreamWriter(System.out)));
		StringTokenizer s = new StringTokenizer(br.readLine());
		
		int n=Integer.parseInt(s.nextToken());
		HashMap<Integer,Integer>hm=new HashMap<>();
		s = new StringTokenizer(br.readLine());
		for(int i=0;i<n;i++) {
			int val=Integer.parseInt(s.nextToken());
			hm.put(val, hm.getOrDefault(val, 0)+1);
		}
		int ans=0;
		for(int val:hm.keySet()) {
			int num=hm.get(val);
			if(num>val)
				ans+=num-val;
			else if(num<val)
				ans+=num;
		}
		pw.println(ans);
		pw.close();
		

	}
}