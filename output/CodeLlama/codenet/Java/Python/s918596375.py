import sys

def solve(sc,out):
	s = sc.next()
	
	a = ["a","e","i","o","u"]
	
	for str in a:
		if str.lower() == s:
			out.println("vowel")
			return
	
	out.println("consonant")
	
def gcd(a, b):
	if a < b:
		return gcd(b, a)
	if b == 0:
		return a
	return gcd(b, a % b)

def lcm(a, b):
	return (a * b) / gcd(a, b)

def main():
	sc = FastScanner(sys.stdin)
	out = PrintWriter(sys.stdout)
	
	solve(sc,out)
	
	out.flush()
	
class FastScanner:
	def __init__(self, inp):
		self.inp = inp
		self.line = None
		self.line_index = 0
		self.next_line()
		
	def next(self):
		if self.line_index >= len(self.line):
			self.next_line()
		
		if self.line_index >= len(self.line):
			return None
		
		word = self.line[self.line_index]
		self.line_index += 1
		return word
		
	def next_line(self):
		self.line = self.inp.readline().strip().split()
		self.line_index = 0
		
	def next_int(self):
		return int(self.next())
		
	def next_long(self):
		return long(self.next())
		
	def next_double(self):
		return float(self.next())
		
	def next_int_array(self, n):
		return [self.next_int() for i in xrange(n)]
		
	def next_long_array(self, n):
		return [self.next_long() for i in xrange(n)]
		
class PrintWriter:
	def __init__(self, out):
		self.out = out
		
	def println(self, x):
		self.out.write(str(x) + "\n")
		
	def flush(self):
		self.out.flush()
		
if __name__ == "__main__":
	main()