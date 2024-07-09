import java.util.*;
import java.lang.*;
import java.io.*;

public class s700281300
{
	public static void main (String[] args) throws java.lang.Exception{
		Scanner sc = new Scanner(System.in);
		int n = sc.nextInt();
		
		while(n-->0) {
			String s = sc.next();
			Set<String> st = new HashSet<>();
			st.add(s);
			
			for(int j=1;j<s.length();j++) {
				StringBuilder sb = new StringBuilder();
				for(int k=0;k<j;k++) {
					sb.append(s.charAt(k));
				}
				String res = sb.toString();
				
				StringBuilder sb2 = new StringBuilder();
				for(int k=j;k<s.length();k++) {
					sb2.append(s.charAt(k));
				}
				String res2 = sb2.toString();
				
				String t = res;
				StringBuilder sb3 = new StringBuilder(res);
				sb3.reverse();
				res = sb3.toString();
				
				String t2 = res2;
				StringBuilder sb4 = new StringBuilder(res2);
				sb4.reverse();
				res2 = sb4.toString();
				
				st.add(t+t2);
				st.add(t2+t);
				
				st.add(t+res2);
				st.add(res2+t);
				
				st.add(res+t2);
				st.add(t2+res);
				
				st.add(res+res2);
				st.add(res2+res);
			}
			
			System.out.println(st.size());
		}
	}
}