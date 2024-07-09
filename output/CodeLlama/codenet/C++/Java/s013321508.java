import java.util.Scanner;
import java.util.Arrays;
import java.util.List;
import java.util.ArrayList;
import java.util.Collections;
import java.util.Iterator;
import java.util.ListIterator;

public class s013321508 {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int N = sc.nextInt();
        int M = sc.nextInt();

        List<Integer> L = new ArrayList<Integer>();
        int l;
        for (int i = 0; i < N; i++) {
            l = sc.nextInt();
            L.add(l);
        }

        Collections.sort(L);

        Iterator<Integer> itr = L.iterator();
        while (itr.hasNext()) {
            int max_L = L.get(L.size() - 1);
            if (max_L == 0) {
                break;
            }

            max_L /= 2;
            ListIterator<Integer> litr = L.listIterator(L.size());
            litr.add(max_L);
            L.remove(L.size() - 1);
        }

        long ans = 0;
        for (int i = 0; i < L.size(); i++) {
            ans += L.get(i);
        }

        System.out.println(ans);
    }
}