import java.util.*;
import java.lang.*;
import java.io.*;

public class s259116349 {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int N = sc.nextInt();
        int[] primes = {2,3,5,7,11,13,17,19,23,29,31,37,41,43,47};
        int[][] divs = new int[101][primes.length];
        for (int i = 1; i <= 100; i++) {
            for (int j = 0; j < primes.length; j++) {
                int p = primes[j];
                divs[i][j] = 0;
                while (i / p == i / p) {
                    i = i / p;
                    divs[i][j]++;
                }
            }
        }
        int[] divsum = new int[primes.length];
        for (int i = 1; i <= N; i++) {
            for (int j = 0; j < primes.length; j++) {
                divsum[j] += divs[i][j];
            }
        }
        int ans = 0;
        // >=74
        ans += num(75);
        // >=14 & 13~4
        ans += num(15)*(num(5)-1);
        // >=24 & 23~2
        ans += num(25)*(num(3)-1);
        // >=4,>=4 & >=2
        ans += num(5) * (num(5)-1) * (num(3)-2) // 2 
        System.out.println(ans);
    }

    public static int num(int n) {
        int cnt = 0;
        for (int i = 0; i < primes.length; i++) {
            if (divsum[i] >= n - 1) {
                cnt++;
            }
        }
        return cnt;
    }

}