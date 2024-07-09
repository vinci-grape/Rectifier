import java.util.*;
import java.io.*;

public class s683946919 {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        while (in.hasNext()) {
            int N = in.nextInt();
            if (N == 0)
                break;
            Map<Integer, List<Integer>> log = new HashMap<Integer, List<Integer>>();
            for (int i = 0; i < N; i++) {
                int month = in.nextInt();
                int day = in.nextInt();
                int hour = in.nextInt();
                int min = in.nextInt();
                String action = in.next();
                int id = in.nextInt();
                int t = month * 30 * 24 * 60 + day * 24 * 60 + hour * 60 + min;
                if (!log.containsKey(id))
                    log.put(id, new ArrayList<Integer>());
                log.get(id).add(t);
                if (action.equals("leave"))
                    log.get(id).add(t);
            }
            int[] total = new int[1000];
            Arrays.fill(total, 0);
            for (int i = 0; i + 1 < log.get(0).size(); i += 2) {
                int god_start = log.get(0).get(i);
                int god_end = log.get(0).get(i + 1);
                for (Map.Entry<Integer, List<Integer>> entry : log.entrySet()) {
                    int id = entry.getKey();
                    if (id == 0)
                        continue;
                    List<Integer> schedule = entry.getValue();
                    for (int j = 0; j + 1 < schedule.size(); j += 2) {
                        int ppl_start = schedule.get(j);
                        int ppl_end = schedule.get(j + 1);
                        int start = Math.max(god_start, ppl_start);
                        int end = Math.min(god_end, ppl_end);
                        total[id] += Math.max(0, end - start);
                    }
                }
            }
            int max_v = 0;
            for (int id = 0; id < 1000; id++) {
                max_v = Math.max(total[id], max_v);
            }
            System.out.println(max_v);
        }
    }
}