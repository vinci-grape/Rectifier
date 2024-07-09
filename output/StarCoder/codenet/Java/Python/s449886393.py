import java.util.*;
import static java.lang.System.*;
import java.math.*;

public class Main {

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		String[] youbi = {"SUN", "MON", "TUE", "WED", "THU", "FRI", "SAT"};
		String s = sc.next();
		int ans = 0;
		for(int i = 0; i < youbi.length; i++) {
			if (youbi[i].equals(s)) {
				ans = 7 - i;
			}
		}
		out.println(ans);
		
	}
}

Translate the above Python code to C.