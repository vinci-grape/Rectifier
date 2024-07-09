import java.util.*;

public class codeforces_95_A {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int pya = in.nextInt();
        String[] arre = new String[pya];
        for (int i = 0; i < pya; i++) {
            arre[i] = in.next();
        }
        String oString = in.next();
        String lowString = oString.toLowerCase();
        char letter1 = in.next().charAt(0);
        char letter2 = 'a';
        if (letter1!= 'a') {
            letter2 = 'b';
        }
        boolean[] valid = new boolean[oString.length()];
        Set<Integer> setcito = new HashSet<>();
        for (int i = 0; i < arre.length; i++) {
            if (lowString.indexOf(arre[i]) >= 0) {
                int wat = 0;
                while (true) {
                    int index = lowString.indexOf(arre[i], wat);
                    if (index < 0) {
                        break;
                    }
                    for (int j = index; j < index + arre[i].length(); j++) {
                        setcito.add(j);
                    }
                    wat = index + 1;
                }
            }
        }
        StringBuilder oStringBuilder = new StringBuilder();
        for (int i = 0; i < oString.length(); i++) {
            char letter = letter1;
            if (oString.charAt(i)!= letter1) {
                letter = letter2;
            }
            if (valid[i]) {
                oStringBuilder.append(letter);
            } else {
                oStringBuilder.append(letter.toUpperCase());
            }
        }
        for (int i : setcito) {
            oStringBuilder.setCharAt(i, letter2);
        }
        System.out.println(oStringBuilder.toString());
    }
}