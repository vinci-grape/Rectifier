import java.util.*;
public class s573429823 {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        long n = sc.nextLong();
        if( n<4 ){
            System.out.println("No");
        }else{
            for( int i=0; i<=(n/4); i++)
            {
                for( int j=0; j<=(n/7); j++ )
                {
                    if( (i*4+j*7)==n )
                    {
                        System.out.println("Yes");
                        return;
                    }
                }
            }
            System.out.println("No");
        }
    }
}