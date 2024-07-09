import java.util.Scanner;

public class s040517919 {
  public static void main(String[] args) {
    Scanner scanner = new Scanner(System.in);
    int A = scanner.nextInt();
    int B = scanner.nextInt();
    
    if (A == B) {
      System.out.println("Draw");
    } else if (A == 1) {
      System.out.println("Alice");
    } else if (B == 1) {
      System.out.println("Bob");
    } else if (A > B) {
      System.out.println("Alice");
    } else {
      System.out.println("Bob");
    }
  }
}