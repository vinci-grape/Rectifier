import java.util.*;

public class s733189960 {
  public static void main(String[] args) {
    Scanner sc = new Scanner(System.in);
    int n = sc.nextInt();
    Map<String, Integer> sdic = new HashMap<>();
    for (int i = 0; i < n; i++) {
      String s = sc.next();
      char[] sarr = s.toCharArray();
      Arrays.sort(sarr);
      s = new String(sarr);
      if (sdic.containsKey(s)) {
        sdic.put(s, sdic.get(s) + 1);
      } else {
        sdic.put(s, 1);
      }
    }
    long ans = 0;
    for (Map.Entry<String, Integer> entry : sdic.entrySet()) {
      ans += entry.getValue() * (entry.getValue() - 1) / 2;
    }
    System.out.println(ans);
  }
}