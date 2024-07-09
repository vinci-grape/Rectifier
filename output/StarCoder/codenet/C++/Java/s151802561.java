import java.util.*;
public class s151802561 {
  public static void main(String[] args){
    int n, i, j, t, sw = 0, mini;
    Scanner sc = new Scanner(System.in);
    n = sc.nextInt();
    int[] A = new int[n];
    for ( i = 0; i < n; i++ ) A[i] = sc.nextInt();

    for ( i = 0; i < n; i++ ){
      mini = i;
      for ( j = i; j < n; j++ ){
        if ( A[j] < A[mini] ) mini = j;
      }
      t = A[i]; A[i] = A[mini]; A[mini] = t;
      if ( i!= mini ) sw++;
    }

    for ( i = 0; i < n; i++ ){
      if (i) System.out.print(" ");
      System.out.print(A[i]);
    }
    System.out.println();
    System.out.println(sw);
  }
}