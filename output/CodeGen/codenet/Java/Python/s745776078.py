import java.util.*;
import java.io.*;

def main():
    n,m=map(int,raw_input().split())
    A=[]
    for i in range(n):
        A.append(map(int,raw_input().split()))
    b=map(int,raw_input().split())
    for i in range(m):
        c=0
        for j in range(n):
            c+=A[j][i]*b[i]
        print c

if __name__=='__main__':
    main()