import java.util.Scanner;

public class codeforces_95_A {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int pya = sc.nextInt();
        String[] arre = new String[pya];
        while (pya > 0) {
            pya--;
            arre[pya] = sc.next().toLowerCase();
        }
        String oString = sc.next();
        String lowString = oString.toLowerCase();
        String letter1 = sc.next().toLowerCase().charAt(0) + "";
        String letter2 = "a".equals(letter1) ? "b" : "a";
        boolean[] valid = new boolean[oString.length()];
        Set<Integer> setcito = new HashSet<>();
        for (String x : arre) {
            if (lowString.contains(x)) {
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
        char[] oString = oString.toCharArray();
        for (int i : setcito) {
            String letter = letter1.equals(lowString.charAt(i) + "") ? letter1 : letter2;
            oString[i] = letter.charAt(0);
        }
        for (char x : oString) {
            System.out.print(x);
        }
        System.out.println();
    }
}