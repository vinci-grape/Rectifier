import sys
import math
class Main:
    def __init__(self):
        self.n=0
        self.a=[]
        self.memo=[[[0 for i in range(1<<10)] for j in range(1000)] for k in range(2)]
    def dp(self,fliped,idx,msk):
        if msk==(1<<self.n)-1:return 0
        if self.memo[fliped][idx][msk]!=-1:return self.memo[fliped][idx][msk]
        x=0
        ff=0
        ans=1e9
        for i in range(self.n):
            if (msk&(1<<i))==0:
                nf= x%2
                if idx==self.n or self.a[fliped][idx]<=self.a[(nf+(ff%2))%2][i]:
                    ans=min(ans,ff+self.dp((nf+(ff%2))%2,i,msk|1<<i))
                ff+=1
            else x-=1
        return self.memo[fliped][idx][msk]=ans
    def main(self):
        self.n=int(sys.stdin.readline())
        self.a=[[0 for i in range(self.n)] for j in range(2)]
        for i in range(self.n):self.a[0][i]=int(sys.stdin.readline())
        for i in range(self.n):self.a[1][i]=int(sys.stdin.readline())
        self.memo=[[[0 for i in range(1<<10)] for j in range(1000)] for k in range(2)]
        ans=self.dp(0,self.n,0)
        print(-1 if ans>=1e8 else ans)
if __name__ == '__main__':
    obj=Main()
    obj.main()