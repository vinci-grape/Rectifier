import java.util.Scanner;

public class s538657784 {
  public static void main(String[] args) {
    Scanner scanner = new Scanner(System.in);
    int N = scanner.nextInt();
    int sqN = (int) Math.sqrt(N);
    for (int i = 0; i < sqN; i++) {
      if (N % (sqN - i) == 0) {
        System.out.println((int) (N / (sqN - i) + sqN - i) - 2);
        break;
      }
    }
  }
}