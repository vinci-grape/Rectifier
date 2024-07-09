import java.util.*;
import java.lang.*;
import java.io.*;

public class s668439281 {
	public static void main (String[] args) {
		Scanner sc = new Scanner(System.in);
		int n = sc.nextInt();
		String[] ls = new String[n];
		for(int i = 0; i < n; i++) {
			ls[i] = sc.next();
		}
		HashMap<String, Integer> hm = new HashMap<>();
		for(int i = 0; i < n; i++) {
			if(hm.containsKey(ls[i])) {
				hm.put(ls[i], hm.get(ls[i]) + 1);
			}
			else {
				hm.put(ls[i], 1);
			}
		}
		int count = 0;
		for(Map.Entry<String, Integer> entry : hm.entrySet()) {
			if(entry.getValue() > count) {
				count = entry.getValue();
			}
		}
		ArrayList<String> ans = new ArrayList<>();
		for(Map.Entry<String, Integer> entry : hm.entrySet()) {
			if(entry.getValue() == count) {
				ans.add(entry.getKey());
			}
		}
		Collections.sort(ans);
		for(int i = 0; i < ans.size(); i++) {
			System.out.println(ans.get(i));
		}
	}
}