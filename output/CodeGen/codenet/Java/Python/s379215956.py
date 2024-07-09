import java.util.*;

class Main {
  public static void main(String[] args) {
    Scanner sc = new Scanner(System.in);
    String s = sc.next();
	String s1 = s.substring(0,1);
    String s2 = s.substring(1,2);
    String s3 = s.substring(2,3);
    String s4 = s.substring(3,4);
    int a = 0;
    
    if(s1.equals(s2)) a = 1;
    if(s2.equals(s3)) a = 1;
    if(s3.equals(s4)) a = 1;
    
    if (a==1) {
	    System.out.println("Bad");
    } else {
      System.out.println("Good");
    }
    
  }
}