import java.util.*;

public class codeforces_678_B {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        String d = scanner.nextLine();
        String ans = "f";
        if (d.charAt(0) =='m') {
            ans = "ly";
        } else {
            ans = "nly";
        }
        int n = Integer.parseInt(d);
        while (true) {
            if (n % 400 == 0 || (n % 4 == 0 && n % 100!= 0)) {
                if (d.charAt(0) == 'w') {
                    d = "f";
                    n++;
                } else if (d.charAt(0) == 't') {
                    d = "th";
                    n++;
                } else if (d.charAt(0) == 'w') {
                    d = "f";
                    n++;
                } else if (d.charAt(0) == 'th') {
                    d = "sa";
                    n++;
                } else if (d.charAt(0) == 'f') {
                    d = "s";
                    n++;
                } else if (d.charAt(0) =='sa') {
                    d = "m";
                    n++;
                } else if (d.charAt(0) =='s') {
                    d = "t";
                    n++;
                }
            } else {
                if (d.charAt(0) =='m') {
                    d = "t";
                    n++;
                } else if (d.charAt(0) == 't') {
                    d = "w";
                    n++;
                } else if (d.charAt(0) == 'w') {
                    d = "th";
                    n++;
                } else if (d.charAt(0) == 'th') {
                    d = "f";
                    n++;
                } else if (d.charAt(0) == "f") {
                    d = "sa";
                    n++;
               