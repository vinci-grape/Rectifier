import sys
t=int(sys.stdin.readline())
count=[0]*(t+1)
for i in range(t):
	count[int(sys.stdin.readline())]+=1
for i in range(1,t+1):
	print(count[i])