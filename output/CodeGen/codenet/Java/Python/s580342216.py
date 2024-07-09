#--- pB ---#
import java.util.*;
import java.lang.*;
import java.io.*;

class Main {
	public static void main (String[] args) throws java.lang.Exception {
		new Solution();
	}
}
class Solution {
	Scanner scanner;
	public Solution() {
		scanner = new Scanner(System.in);

		// scanner.nextLine();
		while (scanner.hasNext()) {
			run_case();
		}
	}
	private void run_case() {
		// scanner.nextLine();
		String line = scanner.nextLine();
		int N = Integer.parseInt(line.split("\\s+")[0]);
		int K = Integer.parseInt(line.split("\\s+")[1]);

		int len = 0;
		while (N > 0) {
			N /= K;
			len ++;
		}

		System.out.println(len);
		return;
	}

	private int[] strToIntArray(String str) {
	    String[] vals = str.split("\\s+");
	    int sz = vals.length;
	    int[] res = new int[sz];
	    for (int i=0; i<sz; i++) {
	        res[i] = Integer.parseInt(vals[i]);
	    }
	    return res;
	}

}
class LCS {
    int[][] dp;
    public int lcs(String A, String B) {
        int sz_a = A.length(), sz_b = B.length();
        dp = new int[sz_a+1][sz_b+1];

        for (int i=0; i<=sz_a; i++) dp[i][0] = 0;
        for (int j=0; j<=sz_b; j++) dp[0][j] = 0;

        for (int i=1; i<=sz_a; i++) {
            for (int j=1; j<=sz_b; j++) {
                if (A.charAt(i-1) == B.charAt(j-1)) {
                    dp[i][j] = dp[i-1][j-1] + 1;
                } else {
                    dp[i][j] = Math.max(dp[i-1][j], dp[i][j-1]);
                }
            }
        }

        return dp[sz_a][sz_b];
    }

    public String getLCS(String X, String Y) {
		int m = X.length();
		int n = Y.length();
        // Following code is used to print LCS
        int index = dp[m][n];
        int temp = index;

        // Create a character array to store the lcs string
        char[] lcs = new char[index+1];
        lcs[index] = '\0'; // Set the terminating character

        // Start from the right-most-bottom-most corner and
        // one by one store characters in lcs[]
        int i = m;
		int j = n;
        while (i > 0 && j > 0) {
            // If current character in X[] and Y are same, then
            // current character is part of LCS
            if (X.charAt(i-1) == Y.charAt(j-1))
            {
                // Put current character in result
                lcs[index-1] = X.charAt(i-1);

                // reduce values of i, j and index
                i--;
                j--;
                index--;
            }

            // If not same, then find the larger of two and
            // go in the direction of larger value
            else if (dp[i-1][j] > dp[i][j-1])
                i--;
            else
                j--;
        }

        // // Print the lcs
        // System.out.print("LCS of "+X+" and "+Y+" is ");
        // for(