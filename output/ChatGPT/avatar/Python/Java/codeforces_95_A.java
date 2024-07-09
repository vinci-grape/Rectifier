import java.util.*;

public class codeforces_95_A {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        int pya = Integer.parseInt(scanner.nextLine());
        ArrayList<String> arre = new ArrayList<>();

        while (pya > 0) {
            pya--;
            arre.add(scanner.nextLine().toLowerCase());
        }

        String oString = scanner.nextLine();
        String lowString = oString.toLowerCase();
        char letter1 = Character.toLowerCase(scanner.nextLine().charAt(0));
        char letter2 = (letter1 != 'a') ? 'a' : 'b';

        int[] valid = new int[oString.length()];
        HashSet<Integer> setcito = new HashSet<>();

        for (String x : arre) {
            if (lowString.indexOf(x) >= 0) {
                int wat = 0;
                while (true) {
                    int index = lowString.indexOf(x, wat);
                    if (index < 0) {
                        break;
                    }
                    for (int i = index; i < index + x.length(); i++) {
                        setcito.add(i);
                    }
                    wat = index + 1;
                }
            }
        }

        char[] oStringArr = oString.toCharArray();
        for (int i : setcito) {
            char letter = (lowString.charAt(i) != letter1) ? letter1 : letter2;
            oStringArr[i] = Character.isLowerCase(oStringArr[i]) ? letter : Character.toUpperCase(letter);
        }

        for (char x : oStringArr) {
            System.out.print(x);
        }
        System.out.println();
    }
}