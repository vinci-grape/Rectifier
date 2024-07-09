#!/usr/bin/python

import sys

a = int(sys.argv[1])
b = int(sys.argv[2])
c = int(sys.argv[3])

if ((100*a + 10*b + c) % 4 == 0):
	print "YES"
else:
	print "NO"