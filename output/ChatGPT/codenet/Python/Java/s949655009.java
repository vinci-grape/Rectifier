import java.util.ArrayList;
import java.util.List;
import java.util.Scanner;

public class s949655009 {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        String strn = scanner.nextLine();
        int n = Integer.parseInt(strn);

        List<String>[] shichigo = new List[strn.length()];
        for (int i = 0; i < strn.length(); i++) {
            shichigo[i] = new ArrayList<>();
            if (i == 0) {
                for (String j : new String[]{"3", "5", "7"}) {
                    shichigo[i].add(j);
                }
            } else {
                for (String j : shichigo[i - 1]) {
                    for (String k : new String[]{"3", "5", "7"}) {
                        shichigo[i].add(j + k);
                    }
                }
            }
        }

        int target = strn.length() - 1;
        for (int i = 0; i < strn.length(); i++) {
            for (String j : new ArrayList<>(shichigo[i])) {
                if (i == target) {
                    if (Integer.parseInt(j) > n) {
                        shichigo[target].remove(j);
                    } else if (j.chars().filter(ch -> ch == '3').count() == 0 || j.chars().filter(ch -> ch == '5').count() == 0 || j.chars().filter(ch -> ch == '7').count() == 0) {
                        shichigo[target].remove(j);
                    }
                } else {
                    if (j.chars().filter(ch -> ch == '3').count() == 0 || j.chars().filter(ch -> ch == '5').count() == 0 || j.chars().filter(ch -> ch == '7').count() == 0) {
                        shichigo[i].remove(j);
                    }
                }
            }
        }

        int sum = 0;
        for (int i = 0; i < strn.length(); i++) {
            sum += shichigo[i].size();
        }
        System.out.println(sum);
    }
}