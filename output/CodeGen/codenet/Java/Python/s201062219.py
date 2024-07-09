import sys
scan=sys.stdin.readline()
c=int(scan.next())
mark=scan.next()
b=int(scan.next())
if mark=='?':
	a=2000001
else:
	a=c+b
x=0
while(True):
	if a[x]==2000001:
		break
	else:
		print a[x]
	x=x+1
x=0
while(True):
	if a[x]==2000001:
		break
	else:
		print a[x]
	x=x+1