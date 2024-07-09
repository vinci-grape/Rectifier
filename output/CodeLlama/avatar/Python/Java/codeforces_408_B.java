import java.util.*;
import java.lang.*;
import java.io.*;

public class codeforces_408_B
{
	public static void main (String[] args) throws java.lang.Exception{
		Scanner sc = new Scanner(System.in);
		String line = sc.nextLine();
		Map<Character,Integer> bought_count = new HashMap<>();
		for(int i=0;i<line.length();i++){
			char ch = line.charAt(i);
			if(bought_count.containsKey(ch)){
				bought_count.put(ch,bought_count.get(ch)+1);
			}
			else{
				bought_count.put(ch,1);
			}
		}
		line = sc.nextLine();
		Map<Character,Integer> made_cout = new HashMap<>();
		for(int i=0;i<line.length();i++){
			char ch = line.charAt(i);
			if(made_cout.containsKey(ch)){
				made_cout.put(ch,made_cout.get(ch)+1);
			}
			else{
				made_cout.put(ch,1);
			}
		}
		int res = 0;
		for(char ch : made_cout.keySet()){
			if(!bought_count.containsKey(ch)){
				System.out.println(-1);
				return;
			}
			res += Math.min(bought_count.get(ch),made_cout.get(ch));
		}
		System.out.println(res);
	}
}