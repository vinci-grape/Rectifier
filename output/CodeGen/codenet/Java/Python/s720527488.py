import java.io.InputStream;
import java.io.InputStreamReader;
import java.io.IOException;
import java.io.PrintWriter;
import java.util.ArrayDeque;
import java.util.ArrayList;
import java.util.Arrays;
import java.util.Comparator;
import java.util.Deque;
import java.util.HashMap;
import java.util.PriorityQueue;
import java.math.BigInteger;
    
class Main{

static final InputStream in=System.in;
static final PrintWriter out=new PrintWriter(System.out);
static final int INF=Integer.MAX_VALUE/2;
static final long LINF=Long.MAX_VALUE/2;
    
public static void main(String[] args) throws IOException{
InputReader ir=new InputReader(in);
int m=ir.nextInt();
int n=ir.nextInt();
int[] manju=ir.toIntArray(m);
int[] boxlen=new int[n];
int[] boxcost=new int[n];
for(int i=0;i<n;i++){
boxlen[i]=ir.nextInt();
boxcost[i]=ir.nextInt();
}
sort(manju);
int[][] dp=new int[m+1][n+1];
for(int i=m-1;i>=0;i--){
for(int j=n-1;j>=0;j--){
int len=i+boxlen[j]>=m?m:i+boxlen[j];
int cnt=0;
for(int k=i;k<len;k++) cnt+=manju[m-1-k];
dp[i][j]=Math.max(dp[i][j],dp[len][j+1]+cnt-boxcost[j]);
dp[i][j]=Math.max(dp[i][j],dp[i][j+1]);
}
}
out.println(dp[0][0]);
out.flush();
}

public static void sort(int[] a){
for(int i=a.length-1;i>=1;i--){
int t=(int)Math.random()*i;
int temp=a[i]; a[i]=a[t]; a[t]=temp;
}
Arrays.sort(a);
}

static class InputReader {
private InputStream in;
private byte[] buffer=new byte[1024];
private int curbuf;
private int lenbuf;

public InputReader(InputStream in) {this.in=in;}
  
public int readByte() {
if(lenbuf==-1) throw new InputMismatchException();
if(curbuf>=lenbuf){
curbuf= 0;
try{
lenbuf=in.read(buffer);
}
catch (IOException e) {
throw new InputMismatchException();
}
if(lenbuf<=0)
return -1;
}
return buffer[curbuf++];
}

public boolean isSpaceChar(int c){return!(c>=33&&c<=126);}

private int skip() {int b; while((b = readByte())!=-1&&isSpaceChar(b)); return b;}

public String next() {
int b=skip();
StringBuilder sb=new StringBuilder();
while(!isSpaceChar(b)){
sb.appendCodePoint(b);
b=readByte();
}
return sb.toString();
}
 
public int nextInt() {