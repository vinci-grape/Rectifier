public class s733189960 {
  public static void main(String[] args) {
    Scanner in = new Scanner(System.in);
    int n = in.nextInt();
    Map<String, Integer> sdic = new HashMap<>();
    for (int i = 0; i < n; i++) {
      String[] s = in.next().split(" ");
      String s1 = "";
      for (int j = 0; j < s.length; j++) {
        s1 += s[j];
      }
      if (sdic.containsKey(s1)) {
        sdic.put(s1, sdic.get(s1) + 1);
      } else {
        sdic.put(s1, 1);
      }
    }
    int ans = 0;
    for (Map.Entry<String, Integer> entry : sdic.entrySet()) {
      ans += entry.getValue() * (entry.getValue() - 1) / 2;
    }
    System.out.println(ans);
  }
}