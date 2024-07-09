// Java code equivalent of the given Python code
import java.util.Scanner;

public class s251858505 {
  public static void main(String[] args) {
    Scanner scanner = new Scanner(System.in);
    String input1 = scanner.nextLine();
    String input2 = scanner.nextLine();

    int sum = 0;
    for (int i = 0; i < input1.length(); i++) {
      if (input1.charAt(i) == input2.charAt(i)) {
        sum++;
      }
    }

    System.out.println(sum);
  }
}