import sys
from collections import deque
MOD=7007
F=[[1,1,0],[1,0,1],[0,1,1],[2,0,0],[0,2,0],[0,0,2]]
Hash=[[] for i in range(MOD)]
class QUEUE:
	def __init__(self,a,b,c,tot):
		self.a=a
		self.b=b
		self.c=c
		self.tot=tot
def HASH(n):
	for i in Hash[n%MOD]:
		if n==i:
			return False
	Hash[n%MOD].append(n)
	return True
def main():
	Push=QUEUE(0,0,0,0)
	que=deque()
	a,b,c=map(int,raw_input().split())
	Push.a=a
	Push.b=b
	Push.c=c
	que.append(Push)
	while que:
		Fro=que.popleft()
		if Fro.a==Fro.b and Fro.b==Fro.c:
			print Fro.tot
			return 0
		for i in range(6):
			Push=Fro
			Push.tot+=1
			Push.a+=F[i][0]
			Push.b+=F[i][1]
			Push.c+=F[i][2]
			n=Push.a*10000+Push.b*100+Push.c
			if not HASH(n):
				continue
			que.append(Push)
	return 0
if __name__=='__main__':
	main()