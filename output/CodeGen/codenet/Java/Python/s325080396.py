class Main:
	def main(self, args):
		R = [int(i) for i in raw_input().split()]
		n = int(raw_input())
		for i in xrange(n):
			R[i] = int(raw_input())
		maxv = R[1] - R[0]
		minv = R[0]
		for i in xrange(1, n):
			maxv = max(maxv, R[i] - minv)
			minv = min(minv, R[i])
		print maxv