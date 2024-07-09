import sys

class IntegralRect:
	def __init__(self, h, w):
		self.height = h
		self.width = w

	def diagonal(self):
		if self.height >= self.width:
			return sys.maxint
		return self.height*self.height + self.width*self.width

	def __cmp__(self, other):
		d1 = self.diagonal()
		d2 = other.diagonal()
		if d1 == d2:
			return self.height - other.height
		return d1 - d2

rects = []
for i in range(200):
	for j in range(200):
		rects.append(IntegralRect(i + 1, j + 1))

rects.sort()

while True:
	h, w = map(int, raw_input().split())
	if h == 0 and w == 0:
		break
	tmpRect = IntegralRect(h, w)
	diag = tmpRect.diagonal()
	for rect in rects:
		if rect > tmpRect:
			print rect.height, rect.width
			break