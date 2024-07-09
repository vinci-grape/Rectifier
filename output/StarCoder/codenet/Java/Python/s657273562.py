import java.io.*;
import java.util.*;

public class Main {
    static PrintWriter pw;
    static Scanner sc;
    static ArrayList<Integer>[] adj;
    static boolean[] visit;
    static HashMap<Pair, Integer> dp;
    static long ceildiv(long x, long y) { return (x+y-1)/y; }
    static int mod(long x, int m) { return (int)((x%m+m)%m); }
    static HashMap<Integer, Integer> map;
    static long gcd(long x, long y) {return y==0?x:gcd(y, x%y);}
    static int Int(boolean x){ return x?1:0; }
    static void put(TreeMap<Pair, Integer> map, Pair p){
        if(map.containsKey(p))
            map.replace(p, map.get(p)+1);
        else
            map.put(p, 1);
    }
    static void rem(TreeMap<Pair, Integer> map, Pair p){
        if(map.get(p)==1)
            map.remove