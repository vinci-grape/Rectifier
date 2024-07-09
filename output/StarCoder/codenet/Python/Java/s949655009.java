import java.util.Scanner;

public class s949655009 {

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		String strn = sc.next();
		int n = Integer.parseInt(strn);
		String[] shichigolist = {"3","5","7"};
		String[][] shichigo = new String[strn.length()][];
		for (int i = 0; i < strn.length(); i++) {
			if (i == 0) {
				for (int j = 0; j < shichigolist.length; j++) {
					shichigo[i][j] = shichigolist[j];
				}
			} else {
				for (int j = 0; j < shichigo[i-1].length; j++) {
					for (int k = 0; k < shichigolist.length; k++) {
						shichigo[i][j+k] = shichigo[i-1][j]+shichigolist[k];
					}
				}
			}
		}
		int target = strn.length()-1;
		for (int i = 0; i < strn.length(); i++) {
			for (int j = 0; j < shichigo[i].length; j++) {
				if (i == target) {
					if (Integer.parseInt(shichigo[target][j]) > n) {
						shichigo[target][j] = null;
					} else if (shichigo[target][j].indexOf("3") == -1 || shichigo[target][j].indexOf("5") == -1 || shichigo[target][j].indexOf("7") == -1) {
						shichigo[target][j] = null;
					}
				} else {
					if (shichigo[i][j].indexOf("3") == -1 || shichigo[i][j].indexOf("5") == -1 || shichigo[i][j].indexOf("7") == -1) {
						shichigo[i][j] = null;
					}
				}
			}
		}
		int sum = 0;
		for (int i = 0; i < strn.length(); i++) {
			sum += shichigo[i].length;
		}
		System.out.println(sum);
	}

}