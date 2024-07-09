import java.util.*;
public class s129088151 {
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		int n = sc.nextInt();
		Map<String, Boolean> T = new HashMap<String, Boolean>();
		for (int i = 0; i < n; i++) {
			String com = sc.next();
			String str = sc.next();
			if (com.charAt(0) == 'i') T.put(str, true);
			else {
				if (T.get(str)) System.out.println("yes");
				else System.out.println("no");
			}
		}
	}
}