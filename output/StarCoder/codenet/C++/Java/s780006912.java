import java.util.*;
public class s780006912 {
  public static void main(String[] args){
    Scanner sc=new Scanner(System.in);
    int n=sc.nextInt();
    int array[]=new int[n];
    for(int i=0;i<n;i++){
      array[i]=sc.nextInt();
    }
    
    int sum=0;
    for(int i=0;i<n-1;i++){
      for(int j=i+1;j<n;j++){
        sum+=array[i]*array[j];
      }
    }
    
    System.out.println(sum);
  }
}