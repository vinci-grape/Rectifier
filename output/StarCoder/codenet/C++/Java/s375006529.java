import java.util.*;
public class s375006529 {
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		String s = sc.next();
		int n = s.length();
		int v[] = new int[26];
		for (int i = 0;i < n;i++)v[s.charAt(i) - 'a']++;
		String ans = "Yes";
		for (int i = 0;i < 26;i++) {
			if (v[i] % 2!= 0) {
				ans = "No";
				break;
			}
		}
		System.out.println(ans);
	}
}