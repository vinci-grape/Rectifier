/*Lucky_Glass*/
from collections import deque
def F(a,b,c):
    return [[a,b,c],[a,c,b],[b,a,c],[b,c,a],[c,a,b],[c,b,a]]
def HASH(n):
    if n in Hash:
        return False
    Hash.append(n)
    return True
def main():
    Hash=[]
    que=deque()
    que.append([a,b,c,0])
    while que:
        Fro=que.popleft()
        if Fro[0]==Fro[1] and Fro[1]==Fro[2]:
            print(Fro[3])
            break
        for i in range(6):
            Push=Fro
            Push[3]+=1
            Push[0]+=F[i][0]
            Push[1]+=F[i][1]
            Push[2]+=F[i][2]
            n=Push[0]*10000+Push[1]*100+Push[2]
            if not HASH(n):
                continue
            que.append(Push)
    return 0
if __name__=='__main__':
    a,b,c=map(int,input().split())
    F=[[1,1,0],[1,0,1],[0,1,1],[2,0,0],[0,2,0],[0,0,2]]
    main()