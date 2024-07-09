import java.util.Scanner;
import java.util.ArrayList;
import java.util.List;

public class s949655009 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String strn = sc.nextLine();
        int n = Integer.parseInt(strn);
        List<String> shichigolist = new ArrayList<>();
        shichigolist.add("3");
        shichigolist.add("5");
        shichigolist.add("7");
        List<List<String>> shichigo = new ArrayList<>();
        for (int i = 0; i < strn.length(); i++) {
            if (i == 0) {
                for (String j : shichigolist) {
                    List<String> temp = new ArrayList<>();
                    temp.add(j);
                    shichigo.add(temp);
                }
            } else {
                for (String j : shichigo.get(i - 1)) {
                    for (String k : shichigolist) {
                        List<String> temp = new ArrayList<>();
                        temp.add(j + k);
                        shichigo.get(i).add(temp.get(0));
                    }
                }
            }
        }
        int target = strn.length() - 1;
        for (int i = 0; i < strn.length(); i++) {
            for (String j : shichigo.get(i)) {
                if (i == target) {
                    if (Integer.parseInt(j) > n) {
                        shichigo.get(target).remove(j);
                    } else if (j.contains("3") == false || j.contains("5") == false || j.contains("7") == false) {
                        shichigo.get(target).remove(j);
                    }
                } else {
                    if (j.contains("3") == false || j.contains("5") == false || j.contains("7") == false) {
                        shichigo.get(i).remove(j);
                    }
                }
            }
        }
        System.out.println(shichigo.get(target).size());
    }
}