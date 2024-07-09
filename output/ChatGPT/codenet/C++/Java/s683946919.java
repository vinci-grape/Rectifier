import java.util.*;
import java.io.*;

public class s683946919 {
  
  static int time2min(int month, int day, int hour, int min){
    final int[] total_day_of_month = {31,28,31,30,31,30,31,31,30,31,30,31};
    int total = 0;
    for(int i=1; i<month; i++){
      total += total_day_of_month[i] * 24 * 60;
    }
    for(int i=1; i<day; i++){
      total += 24 * 60;
    }
    total += hour * 60 + min;

    return total;
  }
  
  public static void main(String[] args) throws IOException {
    BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
    int N;
    while((N = Integer.parseInt(br.readLine())) != 0){
      Map<Integer, ArrayList<Integer>> log = new HashMap<>();
      for(int i=0; i<N; i++){
        String[] input = br.readLine().split(" ");
        int month = Integer.parseInt(input[0].split("/")[0]);
        int day = Integer.parseInt(input[0].split("/")[1]);
        int hour = Integer.parseInt(input[1].split(":")[0]);
        int min = Integer.parseInt(input[1].split(":")[1]);
        char[] action = input[2].toCharArray();
        int id = Integer.parseInt(input[3]);
        
        int t = time2min(month, day, hour, min);
        if(!log.containsKey(id)){
          log.put(id, new ArrayList<>());
        }
        log.get(id).add(t);
      }
  
      int[] total = new int[1000];
      Arrays.fill(total, 0);
      
      List<Integer> godLog = log.get(0);
      for(int i=0; i+1<godLog.size(); i+=2){
        int god_start = godLog.get(i);
        int god_end = godLog.get(i+1);
  
        for(Map.Entry<Integer, ArrayList<Integer>> entry : log.entrySet()){
          int id = entry.getKey();
          if(id == 0) continue;
          List<Integer> schedule = entry.getValue();
          for(int j=0; j<schedule.size(); j+=2){
            int ppl_start = schedule.get(j);
            int ppl_end = schedule.get(j+1);
            int start = Math.max(god_start, ppl_start);
            int end = Math.min(god_end, ppl_end);
            total[id] += Math.max(0, end - start);
          }
        }
      }
  
      int max_v = 0;
      for(int id=0; id<1000; id++){
        max_v = Math.max(total[id], max_v);
      }
      System.out.println(max_v);
    }
  }
}