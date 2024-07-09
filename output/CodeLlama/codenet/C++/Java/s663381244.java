import java.util.Scanner;
import java.util.Vector;

public class s663381244 {
	public static void main(String[] args) {
		Scanner cin = new Scanner(System.in);
		Vector<Integer> m = new Vector<Integer>();
		m.add(10);
		m.add(50);
		m.add(100);
		m.add(500);

		boolean first = true;
		while (cin.hasNextInt()) {
			if (!first)
				System.out.println();

			first = false;
			int sum = 0;
			Vector<Integer> num = new Vector<Integer>();
			for (int i = 0; i < 4; ++i) {
				num.add(cin.nextInt());
				sum += num.get(i) * m.get(i);
			}

			int change = sum - cin.nextInt();
			for (int i = 3; i >= 0; --i) {
				if (change / m.get(i)) {
					num.set(i, num.get(i) - change / m.get(i));
					change %= m.get(i);
				}
			}

			for (int i = 0; i < 4; ++i)
				if (num.get(i) > 0)
					System.out.println(m.get(i) + " " + num.get(i));
		}

		cin.close();
	}
}