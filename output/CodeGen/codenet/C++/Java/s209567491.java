public class s209567491 {
	public static void main(String[] args) {
		Scanner in = new Scanner(System.in);
		int N,D,X;
		int num_of_chocolate;
		int counter;
		int days;
		int A[101];
		
		for (int i = 0; i < N; i++) {
			A[i] = in.nextInt();
		}
		
		for (int i = 0; i < N; i++) {
			days = 0;
			counter = 0;
			for (int j = 0;; j++) {
				days = j * A[i] + 1;
				if (days <= D) {
					counter++;
				}
				else {
					break;
				}
			}
			num_of_chocolate = num_of_chocolate + counter;
		}
		num_of_chocolate = num_of_chocolate + X;
		
		System.out.println(num_of_chocolate);
		
	}
}