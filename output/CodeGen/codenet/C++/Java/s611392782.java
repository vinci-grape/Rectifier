public class s611392782 {

	public static void main(String[] args) {
		Scanner in = new Scanner(System.in);
		String s;
		int d;
		while (in.hasNext()) {
			s = in.next();
			d = in.nextInt();
			int idx = 0;
			int a = mul(s, idx);
			idx = 0;
			int b = bob(s, idx);
			if (a == d) {
				System.out.println((b == d? "U" : "M"));
			} else {
				System.out.println((b == d? "L" : "I"));
			}
		}
	}

	public static int mul(String str, int idx) {
		int res = str.charAt(idx) - '0';
		while (idx + 1 < str.length() && str.charAt(idx + 1) == '*') {
			idx += 2;
			res *= str.charAt(idx) - '0';
		}
		return res;
	}

	public static int add(String str, int idx) {
		int res = mul(str, idx);
		while (idx + 1 < str.length() && str.charAt(idx + 1) == '+') {
			idx += 2;
			res += mul(str, idx);
		}
		return res;
	}

	public static int bob(String str, int idx) {
		int res = str.charAt(idx) - '0';
		while (idx + 1 < str.length()) {
			if (str.charAt(idx + 1) == '+') res += str.charAt(idx + 2) - '0';
			else                  res *= str.charAt(idx + 2) - '0';
			idx += 2;
		}
		return res;
	}
}