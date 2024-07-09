import math

def sig(d):
	if abs(d) < 1e-8:
		return 0
	if d < 0:
		return -1
	else:
		return 1

class Point:
	def __init__(self, x, y):
		self.x = x
		self.y = y
	def set(self, x, y):
		self.x = x
		self.y = y
	def mod(self):
		return math.sqrt(self.x*self.x+self.y*self.y)
	def mod_pow(self):
		return self.x*self.x + self.y*self.y
	def output(self):
		print "x = %f, y = %f" % (self.x, self.y)
	def __lt__(self, p):
		if sig(self.x-p.x)!= 0:
			return self.x < p.x
		else:
			return sig(self.y-p.y) < 0

def dot(o, a, b):
	return (a.x-o.x)*(b.x-o.x) + (a.y-o.y)*(b.y-o.y)

def dot(a, b):
	return a.x*b.x + a.y*b.y

def cross(o, a, b):
	return (a.x - o.x)*(b.y - o.y)-(b.x - o.x)*(a.y - o.y)

def btw(x, a, b):
	return sig(dot(x, a, b))

def dis(a, b):
	return math.sqrt((a.x-b.x)*(a.x-b.x)+(a.y-b.y)*(a.y-b.y))

def cos(o, a, b):
	return dot(o,a,b)/dis(o,a)/dis(o,b)

def jarvis(p, n, ch):
	d, i, o, s, l, t
	for d in range(n):
		if p[d] < p[0]:
			p[0], p[d] = p[d], p[0]
	l = s = 0
	d = 1
	while d < n:
		o = l
		for i in range(n):
			if (t=sig(cross(p[o], p[l], p[i]))) > 0 or (t == 0 and btw(p[l], p[o], p[i]) <= 0):
				l = i
		ch[d] = l
		d += 1
		l = (l+1)%n
		if l == s:
			break
	return d-1

n = int(raw_input())
P = [Point(0,0) for i in range(110)]
ch = [0 for i in range(110)]
ang = [0 for i in range(110)]
ans = [0 for i in range(110)]
for i in range(n):
	xx, yy = map(int, raw_input().split())
	P[i].set(xx, yy)
if n == 2:
	print "0.5"
	print "0.5"
else:
	m = jarvis(P, n, ch)
	sum = 0
	if m == 2:
		ans[ch[0]] = 0.5
		ans[