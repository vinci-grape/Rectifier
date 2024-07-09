import sys
import io
import atexit
import io
import sys
import math
import itertools
import collections
import random

class Main
{
    static FastScanner in=new FastScanner(sys.stdin);
    static PrintWriter out=new PrintWriter(sys.stdout);

    public static void main(String args[])
    {
        int n=in.nextInt();
        long[] pre=new long[n+1];
        
        for(int i=1;i<=n;i++)
        {
            pre[i]=pre[i-1]+in.nextLong();
        }
        
        long min=9223372036854775807;
        
        for(int i=1;i<n;i++)
        {
            long val1=pre[i],val2=pre[n]-pre[i];
            
            min=min(min,abs(val1-val2));
        }
        
        out.println(min);
        out.close();
    }
}
class FastScanner:
    def __init__(self,stream):
        self.buffer=io.TextIOWrapper(stream).readline
        self.tokenizer=iter(self.buffer,'\n')

    def __iter__(self):
        return self

    def __next__(self):
        val=next(self.tokenizer)
        return val[:-1]

    def nextInt(self):
        return int(self.nextToken())

    def nextLong(self):
        return long(self.nextToken())

    def nextDouble(self):
        return float(self.nextToken())

    def nextToken(self):
        val=next(self.tokenizer)
        return val

atexit.register(Main.main,sys.argv)