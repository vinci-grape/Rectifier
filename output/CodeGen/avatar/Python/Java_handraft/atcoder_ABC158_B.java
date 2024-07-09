import java.util.*;
import java.lang.*;
import java.io.*;

public class atcoder_ABC158_B {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
		int mod = 1000000007;
        long N = input.nextLong();
        long A = input.nextLong();
        long B = input.nextLong();
		long ans = 0;
		long rep = N / ( A + B );
		ans += rep * A;
		long res = N - rep * ( A + B );
		ans += Math.min ( res, A );
		System.out.println ( ans );
	}
}