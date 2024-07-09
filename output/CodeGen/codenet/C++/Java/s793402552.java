public class s793402552 {
	public static void main(String[] args) {
		int a, b;
		Scanner in = new Scanner(System.in);
		a = in.nextInt();
		b = in.nextInt();
		String bstr = Integer.toString(b);
		int num = a * Math.pow(10, bstr.length()) + b;
		int i;
		for (i = 1; i <= 100100; i++) {
			if (i * i == num) break;
		}
		if (i > 100100) System.out.println("No");
		else System.out.println("Yes");
	}
}