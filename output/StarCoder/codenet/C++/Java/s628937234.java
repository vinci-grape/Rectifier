import java.util.*;
public class s628937234 {

    public static void main(String[] args) {
		Scanner in = new Scanner(System.in);
		String s = in.next();
		String t = s.substring(0, 1);
		t += Integer.toString(s.length() - 2);
		t += s.substring(s.length() - 1, s.length());
		System.out.println(t);
	}
}