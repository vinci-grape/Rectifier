import java.lang.reflect.Array;
import java.util.*;

class Main {

  static int N;
  static int K;
  static long Q;
  static int A;
  static int B;
  static long C;
  static double min = 9999999;
  static long ans = 0;

  public static void main(String[] args) {
    Scanner scanner = new Scanner(System.in);

    int N = scanner.nextInt();


    scanner.nextLine();

    String s = scanner.nextLine();

    boolean flag = false;
    int ans = 0;
    int hen = 0;
    int sha = 0;
    int dot = 0;
    int temp = 0;
    boolean first = true;
    for (int i = 0; i < N; i++) {
//      System.out.println(s.charAt(i));
      if(s.charAt(i) == '#'){
        first = false;
          if(sha <= dot){
//            System.out.println(sha);
            ans += sha;
            sha = 0;
            dot = 0;
            first = true;
//            System.out.println(111111111);
          }else{
//            System.out.println(9292992);
//            temp += dot;
          }

        sha++;
      }else{
//        System.out.println(first);
//        if(first == false) {

          dot++;
//        }
      }
    }

    if(sha <= dot){
      ans += sha;
      dot = 0;
    }else{
//            temp += dot;
    }


//    System.out.println(dot);

    System.out.println(ans + dot);
  }
}