import java.util.*;
import java.io.*;

class Main{
    static int[] counter ;
    static List<List<Integer>> graph;
    public static void main(String[] args){
        FastScanner fs = new FastScanner();
        int n = fs.nextInt();
        int q = fs.nextInt();
        graph = new ArrayList<>();
        for(int i=0;i<n;i++)graph.add(new LinkedList<>());

        counter = new int[n];
        Integer a,b;
        for(int i=0;i<n-1;i++){
            a = fs.nextInt()-1;
            b = fs.nextInt()-1;
            graph.get(a).add(b);
            graph.get(b).add(a);
        }
        for(int i=0;i<q;i++){
            counter[fs.nextInt()-1]+=fs.nextInt();
        }
        dfs(0,-1,0);
        StringJoiner sj = new StringJoiner(" ");
        for(int i=0;i<n;i++){
            sj.add(String.valueOf(counter[i]));
        }
        System.out.println(sj.toString());
    }

    static void dfs(int v,int par,long val){
        
        for(Integer i: graph.get(v)){
            if(i!=par){
                dfs(i,v,val+counter[v]);
            }
        }
        counter[v]+=val;
    }
    static class FastScanner{
        private final InputStream in = System.in;
        private final byte[] buffer = new byte[1024];
        private int ptr = 0;
        private int buflen = 0;

        private boolean hasNextByte(){
            if(ptr < buflen){
                return true;
            }else{
                ptr = 0;
                try{
                    buflen = in.read(buffer);
                }catch(IOException e){
                    e.printStackTrace();
                }
                if(buflen <= 0){
                    return false;
                }
            }
            return true;
        }

        private int readByte(){
            if(hasNextByte())return buffer[ptr++];
            else return -1;
        }

        public boolean hasNext(){
            while(hasNextByte() &&!isPrintableChar(buffer[ptr]))ptr++;
            return hasNextByte();
        }

        public String next(){
            if(!hasNext()) throw new NoSuchElementException();
            StringBuilder sb = new StringBuilder();
            int b = readByte();
            while(isPrintableChar(b)){
                sb.appendCodePoint(b);
                b = readByte();
            }
            return sb.toString();
        }

        public long nextLong(){
            if(!hasNext()) throw new NoSuchElementException();
            long n = 0;
            boolean minus = false;
            int b = readByte();
            if(b == '-'){
                minus = true;
                b = readByte();
            }
            if(b < '0' || '9' < b){
                throw new NumberFormatException();
            }
            while(true){
                if('0' <= b && b<='9'){
                    n*=10;
                    n+=b-'0';
                }else if(b==-1 ||!isPrintableChar(b)){
                    return minus? -n : n;
                }else{
                    throw new NumberFormatException();
                }
                b = readByte();
            }
        }
        public int nextInt(){
            long nl = nextLong();
            if(nl < Integer.MIN_VALUE || nl > Integer.MAX_VALUE)throw new NumberFormatException();
            return (int)nl;
        }
        public double nextDouble(){return Double.parseDouble(next());}
    }
}