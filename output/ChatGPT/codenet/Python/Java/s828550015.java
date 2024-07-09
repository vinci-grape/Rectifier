import java.util.*;

public class s828550015 {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int x = scanner.nextInt();
        int y = scanner.nextInt();
        int a = scanner.nextInt();
        int b = scanner.nextInt();
        int c = scanner.nextInt();
        
        List<Integer> p = new ArrayList<>();
        for (int i = 0; i < x; i++) {
            p.add(scanner.nextInt());
        }
        Collections.sort(p, Collections.reverseOrder());
        p = p.subList(0, x);
        
        List<Integer> q = new ArrayList<>();
        for (int i = 0; i < y; i++) {
            q.add(scanner.nextInt());
        }
        Collections.sort(q, Collections.reverseOrder());
        q = q.subList(0, y);
        
        List<Integer> r = new ArrayList<>();
        for (int i = 0; i < c; i++) {
            r.add(scanner.nextInt());
        }
        Collections.sort(r, Collections.reverseOrder());
        
        List<Integer> pq = new ArrayList<>(p);
        pq.addAll(q);
        Collections.sort(pq);
        
        for (int i = 0; i < Math.min(x + y, a + b, c); i++) {
            if (pq.get(i) < r.get(i)) {
                pq.set(i, r.get(i));
            }
        }
        
        int sum = 0;
        for (int num : pq) {
            sum += num;
        }
        System.out.println(sum);
    }
}