import java.util.ArrayList;
import java.util.List;

class TSize
{
    int r;
    int c;
    TSize()
    {
        r = 0;
        c = 0;
    }
    TSize(int Ar, int Ac)
    {
        r = Ar;
        c = Ac;
    }
}

class TMcmSolver
{
    List<TSize> FChain;
    int[][] FMemo;

    static int Count(TSize Left, TSize Right)
    {
        return Left.r * Right.c * Left.c;
    }
    int Solve(int s, int l)
    {
        assert(s <= l);
        if(s == l) return 0;
        if(FMemo[s][l]!= 0) return FMemo[s][l];
        if(s + 1 == l){
            FMemo[s][l] = Count(FChain.get(s), FChain.get(l));
        }else{
            int min = Integer.MAX_VALUE;
            for(int i = s; i < l; ++i){
                int c = Solve(s, i) + Count(new TSize(FChain.get(s).r, FChain.get(i).c), new TSize(FChain.get(i+1).r, FChain.get(l).c)) + Solve(i+1, l);
                min = Math.min(min, c);
            }
            FMemo[s][l] = min;
        }
        return FMemo[s][l];
    }
public:
    TMcmSolver(List<TSize> Chain)
    {
        FChain = Chain;
        FMemo = new int[Chain.size()][Chain.size()];
        for(int i = 0; i < FMemo.length; ++i){
            for(int j = 0; j < FMemo[0].length; ++j){
                FMemo[i][j] = 0;
            }
        }
    }
    int Answer()
    {
        return Solve(0, FMemo.length-1);
    }
    void Print()
    {
        for(int s = 0; s < FMemo.length; ++s){
            for(int l = 0; l < FMemo[0].length; ++l){
                System.out.print(FMemo[s][l] + '\t');
            }
            System.out.println();
        }
    }
}

public class s792884768 {
    public static void main(String[] args)
    {
        int n;
        Scanner scanner = new Scanner(System.in);
        n = scanner.nextInt();
        if(n == 1){
            System.out.println(0);
            return;
        }
        List<TSize> Chain = new ArrayList<TSize>();
        for(int i = 0; i < n; ++i){
            TSize Size = new TSize();
            Size.r = scanner.nextInt();
            Size.c = scanner.nextInt();
            Chain.add(Size);
        }
        TMcmSolver Solver = new TMcmSolver(Chain);
        System.out.println(Solver.Answer());
    }
}