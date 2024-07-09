import java.util.*;
import java.io.*;

public class s501882481 {
  public static void main(String[] args) {
    Scanner in = new Scanner(System.in);
    String S = in.next();
    if (S.equals("Sunny")) {
      System.out.println("Cloudy");
    } else if (S.equals("Cloudy")) {
      System.out.println("Rainy");
    } else {
      System.out.println("Sunny");
    }
  }
}