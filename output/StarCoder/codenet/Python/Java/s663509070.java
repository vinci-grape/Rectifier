import java.util.*;
public class s663509070 {

    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        int N=sc.nextInt();
        int D=sc.nextInt();
        int[][] mat=new int[N][N];
        for(int i=0;i<N;i++)
            for(int j=0;j<N;j++)
                mat[i][j]=sc.nextInt();
        int c=0;
        for(int i=0;i<N-1;i++)
            for(int j=i+1;j<N;j++)
                if(Math.sqrt(Math.pow(mat[i][0]-mat[j][0],2)+Math.pow(mat[i][1]-mat[j][1],2))==Math.floor(Math.sqrt(Math.pow(mat[i][0]-mat[j][0],2)+Math.pow(mat[i][1]-mat[j][1],2))))
                    c++;
        System.out.println(c);
    }
}