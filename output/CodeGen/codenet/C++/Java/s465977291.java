public class s465977291 {
	public static void main(String[] args) {
		int n,d;
		Scanner in = new Scanner(System.in);
		n = in.nextInt();
		d = in.nextInt();
		double a = d*2+1;
		System.out.println(Math.ceil(n/a));
	}
}