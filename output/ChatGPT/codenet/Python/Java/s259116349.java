import java.util.*;

public class s259116349 {
    
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int N = scanner.nextInt();
        
        List<Integer> primes = Arrays.asList(2,3,5,7,11,13,17,19,23,29,31,37,41,43,47);
        List<List<Integer>> divs = new ArrayList<>();
        
        for (int i = 1; i <= 100; i++) {
            List<Integer> tmp = new ArrayList<>(Collections.nCopies(primes.size(), 0));
            for (int j = 0; j < primes.size(); j++) {
                int p = primes.get(j);
                while (i%p == 0) {
                    i /= p;
                    tmp.set(j, tmp.get(j) + 1);
                }
            }
            divs.add(tmp);
        }
        
        List<Integer> divsum = new ArrayList<>(Collections.nCopies(primes.size(), 0));
        for (int i = 1; i <= N; i++) {
            for (int j = 0; j < primes.size(); j++) {
                divsum.set(j, divsum.get(j) + divs.get(i-1).get(j));
            }
        }
        
        int ans = 0;
        
        // >=74
        ans += num(divsum, 75);
        
        // >=14 & 13~4
        ans += num(divsum, 15) * (num(divsum, 5) - 1);
        
        // >=24 & 23~2
        ans += num(divsum, 25) * (num(divsum, 3) - 1);
        
        // >=4,>=4 & >=2
        ans += num(divsum, 5) * (num(divsum, 5) - 1) * (num(divsum, 3) - 2) / 2;
        
        System.out.println(ans);
    }
    
    private static int num(List<Integer> divsum, int n) {
        int count = 0;
        for (int i : divsum) {
            if (i >= n-1) {
                count++;
            }
        }
        return count;
    }
}