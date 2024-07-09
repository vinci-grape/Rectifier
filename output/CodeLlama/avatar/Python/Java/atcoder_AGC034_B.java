import java.util.*;
import java.lang.*;
import java.io.*;

public class atcoder_AGC034_B
{
	public static void main (String[] args) throws java.lang.Exception{
		Scanner sc = new Scanner(System.in);
		String s = sc.nextLine();
		String t = "";
		int i = 0;
		while(i < s.length()){
			if(s.charAt(i) == 'A'){
				t += "A";
				i++;
			}
			else if(s.charAt(i) == 'B'){
				if(i < s.length() - 1){
					if(s.charAt(i + 1) == 'C'){
						t += "D";
						i += 2;
					}
					else{
						t += "X";
						i++;
					}
				}
				else{
					t += "X";
					i++;
				}
			}
			else{
				t += "X";
				i++;
			}
		}
		int total = 0;
		int numA = 0;
		for(i = 0; i < t.length(); i++){
			if(t.charAt(i) == 'X'){
				numA = 0;
			}
			else{
				if(t.charAt(i) == 'A'){
					numA++;
				}
				else{
					total += numA;
				}
			}
		}
		System.out.println(total);
		int INF = 10 * 25;
		int mod = 7 + 10 * 9;
	}
}