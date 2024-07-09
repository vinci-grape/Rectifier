import java.util.*;

public class codeforces_274_A {
  public static void main(String[] args) {
    Scanner sc = new Scanner(System.in);
    int num = sc.nextInt();
    int k = sc.nextInt();
    int[] arr = new int[num];
    
    for (int i = 0; i < num; i++) {
      arr[i] = sc.nextInt();
    }
    
    Set<Integer> different = new HashSet<>();
    int temp = 0;
    Arrays.sort(arr);
    
    for (int x : arr) {
      if (x % k != 0 || !different.contains(x / k)) {
        different.add(x);
      }
      temp = Math.max(different.size(), temp);
    }
    
    System.out.println(temp);
  }
}