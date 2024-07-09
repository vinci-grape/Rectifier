import java.util.*;
import java.io.*;
import java.math.*;
public class s143031369 {
    public static void main(String[] args) {
        Scanner cin=new Scanner(System.in);
        int n=cin.nextInt();
        double ang[]=new double[110];
        double ans[]=new double[110];
        Point P[]=new Point[110];
        for(int i=0;i<n;i++){
            int x=cin.nextInt();
            int y=cin.nextInt();
            P[i]=new Point(x,y);
        }
        if(n==2){
            System.out.println("0.5");
            System.out.println("0.5");
        }else{
            int ch[]=new int[110];
            int m=jarvis(P,n,ch);
            double sum=0;
            if(m==2){
                ans[ch[0]]=0.5;
                ans[ch[1]]=0.5;
            }else{
                for(int i=0;i<m;i++){
                    ang[ch[i]]=PI-acos(cos(P[ch[i]],P[ch[(i-1+m)%m]],P[ch[(i+1)%m]]));
                }
                for(int i=0;i<n;i++){
                    ans[i]=ang[i]/2./PI;
                }
            }
            for(int i=0;i<n;i++){
                System.out.println(ans[i]);
            }
        }
    }
    public static int sig(double d){
        if(Math.abs(d)<1e-8)return 0;
        if(d<0)return -1;
        return 1;
    }
    public static double dot(Point o,Point a,Point b){
        return (a.x-o.x)*(b.x-o.x)+(a.y-o.y)*(b.y-o.y);
    }
    public static double dot(Point a,Point b){
        return a.x*b.x+a.y*b.y;
    }
    public static double cross(Point o,Point a,Point b){
        return (a.x-o.x)*(b.y-o.y)-(b.x-o.x)*(a.y-o.y);
    }
    public static int btw(Point x,Point a,Point b){
        return sig(dot(x,a,b));
    }
    public static double dis(Point a,Point b){
        return Math.sqrt((a.x-b.x)*(a.x-b.x)+(a.y-b.y)*(a.y-b.y));
    }
    public static double cos(Point o,Point a,Point b){
        return dot(o,a,b)/dis(o,a)/dis(o,b);
    }
    public static int jarvis(Point P[],int n,int ch[]){
        int d,i,o,s,l,t;
        for(d=i=0;i<n;i++)
            if(P[i]<P[d])d=i;
        l=s=ch[0]=d;
        d=1;
        do{
            o=l;
            for(i=0;i<n;i++){
                if((t=sig(cross(P[o],P[l],P[i])))>0 || (t==0 && btw(P[l],P[o],P[i])<=0))l=i;
            }
            ch[d++]=l;
        }while(l!=s);
        return d-1;
    }
}
class Point implements Comparable<Point>{
    double x,y;
    public Point(){}
    public Point(