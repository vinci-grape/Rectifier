import java.util.Scanner;

public class s150958471 {

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		int[] train = new int[2];
		int[] bus = new int[2];

		for (int i = 0; i < 2; i++) {
			train[i] = sc.nextInt();
		}
		for (int i = 0; i < 2; i++) {
			bus[i] = sc.nextInt();
		}

		System.out.println((train[0] < train[1] ? train[0] : train[1])
				+ (bus[0] < bus[1] ? bus[0] : bus[1]));
	}
}