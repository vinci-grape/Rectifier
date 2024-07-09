class Solver:
	def __init__(self, in, out):
		self.in = in
		self.out = out

	def solve(self):
		H = self.ni()
		W = self.ni()
		C = []
		for i in range(H+2):
			C.append([0]*(W+2))
		for i in range(H):
			c = list(self.ns())
			for j in range(W):
				C[i+1][j+1] = c[j]
		if H == 1 and W == 1:
			self.prn("No")
			return
		for i in range(1, H+1):
			for j in range(1, W+1):
				if C[i][j] == '#' and C[i-1][j] != '#' and C[i+1][j] != '#' and C[i][j-1] != '#' and C[i][j+1] != '#':
					self.prn("No")
					return
		self.prn("Yes")

	def prn(self, s):
		self.out.println(s)

	def ni(self):
		return int(self.in.nextLine())

	def ns(self):
		return self.in.nextLine()

	def nd(self):
		return float(self.in.nextLine())

	def nl(self):
		return long(self.in.nextLine())

	def ndi(self, n):
		return [int(x) for x in self.in.nextLine().split()]

	def nds(self, n):
		return self.in.nextLine().split()

	def ndd(self, n):
		return [float(x) for x in self.in.nextLine().split()]

	def ndl(self, n):
		return [long(x) for x in self.in.nextLine().split()]

	def nddl(self, n