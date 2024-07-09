import java.io.*;
import java.util.*;
import java.lang.*;
import java.math.BigInteger; 

class Main{
    public static void main(String[] args) {
        InputStream inputStream = System.in;
        OutputStream outputStream = System.out;
        InputReader in = new InputReader(inputStream);
        PrintWriter out = new PrintWriter(outputStream);
        solve(in, out);
        out.close();
    }
    static int L,R,top,bottom;
    // static int ans;
    public static void solve(InputReader sc, PrintWriter pw) {
        // int t=sc.nextInt();
        int t=1;
        u:while(t-->0){
            long n=sc.nextLong();
            long m=sc.nextLong();
            if(n==0){
                pw.println(0);
                continue u;
            }
            if(n==m){
                pw.println(0);
                continue u;
            }
            if(n>m){
                n=m+n%m;
                n-=m;
                pw.println(Math.min(m-n,n));
                continue u;
            }
            pw.println(Math.min(m-n,n));
        }
    }
}

class Pair{
    int u, v,i,val;
    Pair(int a,int b, int i){
        this.u=a;
        this.v=b;
        this.i=i;
    }   
}

class PairComparator implements Comparator<Pair>{
    @Override
    public int compare(Pair p1, Pair p2) {
        return (p1.v-p2