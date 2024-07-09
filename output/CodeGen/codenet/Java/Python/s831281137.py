import java.io.PrintStream;
import java.util.Scanner;

def main(args):
    N = nint()
    W = nint()
    
    # 品物i
    v = [nint() for i in range(1, N+1)]
    w = [nint() for i in range(1, N+1)]
    
    # 加算结果
    sumV = [[0 for i in range(W+1)] for j in range(N+1)]
    
    for i in range(1, N+1):
        for i_sum in range(0, w[i]):
            sumV[i][i_sum] = sumV[i-1][i_sum]
        
        for i_sum in range(w[i], W+1):
            sumV[i][i_sum] = max(sumV[i-1][i_sum], sumV[i-1][i_sum-w[i]] + v[i])
    
    so.println(sumV[N][W])

def nint():
    return int(sc.next())

def nlong():
    return long(sc.next())

def nstr():
    return sc.next()

def nsToChars():
    return sc.next().toCharArray()

def nsToChars2D(h, w):
    return nsToChars2D(h, w, 0)

def nsToChars2D(h, w, pad):
    a2 = [[0 for i in range(w+pad*2)] for j in range(h+pad*2)]
    for i in range(h):
        System.arraycopy(nsToChars(), 0, a2[pad+i], pad, w)
    return a2

def main(args):
    N = nint()
    W = nint()
    
    # 品物i
    v = [nint() for i in range(1, N+1)]
    w = [nint() for i in range(1, N+1)]
    
    # 加算结果
    sumV = [[0 for i in range(W+1)] for j in range(N+1)]
    
    for i in range(1, N+1):
        for i_sum in range(0, w[i]):
            sumV[i][i_sum] = sumV[i-1][i_sum]
        
        for i_sum in range(w[i], W+1):
            sumV[i][i_sum] = max(sumV[i-1][i_sum], sumV[i-1][i_sum-w[i]] + v[i])
    
    so.println(sumV[N][W])

def nint():
    return int(sc.next())

def nlong():
    return long(sc.next())

def nstr():
    return sc.next()

def nsToChars():
    return sc.next().toCharArray()

def nsToChars2D(h, w):
    return nsToChars2D(h, w, 0)

def nsToChars2D(h, w, pad):
    a2 = [[0 for i in range(w+pad*2)] for j in range(h+pad*2)]
    for i in range(h):
        System.arraycopy(nsToChars(), 0, a2[pad+i], pad, w)
    return a2

def main(args):
    N = nint()
    W = nint()
    
    # 品物i
    v = [nint() for i in range(1, N+1)]
    w = [nint() for i in range(1, N+1)]
    
    # 加算结果
    sumV = [[0 for i in range(W+1)] for j in range(N+1)]
    
    for i in range(1, N+1):
        for i_sum in range(0, w[i]):
            sumV[i][i_sum] = sumV[i-1][i_sum]
        
        for i_sum in range(w[i], W+1):
            sumV[i][i_sum] = max(sumV[i-1][i_sum], sumV[i-1][i_sum-w[i]] + v[i])
    
    so.println(sumV[N][W])

def nint():
    return int(sc.next())

def nlong():
    return long(sc.next())

def nstr():
    return sc.next()

def nsToChars():
    return sc.next().toCharArray()

def nsToChars2D(h, w):
    return nsToChars2