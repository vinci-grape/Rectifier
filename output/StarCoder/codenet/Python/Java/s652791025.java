import java.util.Scanner;

public class s652791025 {
  public static void main(String[] args) {
    Scanner sc = new Scanner(System.in);
    int n = sc.nextInt();
    n = n % 10;
    if (n == 2 || n == 4 || n == 5 || n == 7 || n == 9) {
      System.out.println("hon");
    } else if (n == 0 || n == 1 || n == 6 || n == 8) {
      System.out.println("pon");
    } else {
      System.out.println("bon");
    }
  }
}