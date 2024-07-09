import java.util.*;

public class s875904659 {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        String[] cards = new String[n];
        String[] cards2 = new String[n];
        for (int i = 0; i < n; i++) {
            cards[i] = sc.next();
        }
        for (int i = 0; i < n; i++) {
            cards2[i] = cards[i];
        }
        bubbleSort(cards);
        System.out.println("Stable");
        selectionSort(cards2);
        if (Arrays.equals(cards, cards2)) {
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
        for (String card : cards) {
            System.out.print(card + " ");
        }
        System.out.println();
    }

    public static void selectionSort(String[] cards) {
        int n = cards.length;
        for (int i = 0; i < n; i++) {
            int min = i;
            for (int j = i; j < n; j++) {
                if (Integer.parseInt(cards[j].substring(1)) < Integer.parseInt(cards[min].substring(1))) {
                    min = j;
                }
            }
            if (min!= i) {
                String temp = cards[i];
                cards[i] = cards[min];
                cards[min] = temp;
            }
        }
        for (String card : cards) {
            System.out.print(card + " ");
        }
        System.out.println();
    }
}