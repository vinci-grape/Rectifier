import java.util.*;
import java.lang.*;
import java.io.*;
public class s763208424 {
    public static void main (String[] args) {
        Scanner scan = new Scanner(System.in);
        int n = scan.nextInt();
        int m = scan.nextInt();
        PriorityQueue<Integer> pq = new PriorityQueue<Integer>(Collections.reverseOrder());
        for(int i=0;i<n;i++)
            pq.add(-scan.nextInt());
        for(int i=0;i<m;i++)
            pq.add(-pq.poll()/2);
        System.out.println(-pq.stream().mapToInt(x -> x).sum());
    }
}