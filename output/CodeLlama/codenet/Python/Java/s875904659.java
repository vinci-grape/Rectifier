import java.util.Scanner;

public class s875904659 {

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		int n = sc.nextInt();
		String[] cards = sc.nextLine().split(" ");
		String[] cards2 = new String[cards.length];
		for (int i = 0; i < cards.length; i++) {
			cards2[i] = cards[i];
		}
		bubbleSort(cards);
		System.out.println("Stable");
		selectionSort(cards2);
		if (" ".join(cards2).equals(" ".join(cards))) {
			System.out.println("Stable");
		} else {
			System.out.println("Not stable");
		}
	}

	public static void bubbleSort(String[] cards) {
		int n = cards.length;
		for (int i = 0; i < n; i++) {
			for (int j = n - 1; j > i; j--) {
				if (Integer.parseInt(cards[j].substring(1)) < Integer.parseInt(cards[j - 1].substring(1))) {
					String temp = cards[j];
					cards[j] = cards[j - 1];
					cards[j - 1] = temp;
				}
			}
		}
		for (int i = 0; i < n; i++) {
			System.out.print(cards[i] + " ");
		}
		System.out.println();
	}

	public static void selectionSort(String[] cards) {
		int n = cards.length;
		for (int i = 0; i < n; i++) {
			int mini = i;
			for (int j = i; j < n; j++) {
				if (Integer.parseInt(cards[j].substring(1)) < Integer.parseInt(cards[mini].substring(1))) {
					mini = j;
				}
			}
			if (mini != i) {
				String temp = cards[i];
				cards[i] = cards[mini];
				cards[mini] = temp;
			}
		}
		for (int i = 0; i < n; i++) {
			System.out.print(cards[i] + " ");
		}
		System.out.println();
	}
}