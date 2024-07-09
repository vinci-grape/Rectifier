import sys
import math
import copy
import itertools
import collections
import operator
import functools
import bisect
import heapq
import time
import random
import re
import string
import array
import os
import sys
import math
import copy
import itertools
import collections
import operator
import functools
import bisect
import heapq
import time
import random
import re
import string
import array

ans = 100

def solve():
	global ans
	for add in range(1,N):
		taken = [False]*N
		p = balls[add][0]-balls[0][0]
		q = balls[add][1]-balls[0][1]
		ans = min(ans,check(p,q))

def check(p,q):
	ret = 0
	while True:
		added = False
		start = 0
		x = -1
		y = -1
		for i in range(N):
			if not taken[i]:
				added = True
				ret += 1
				start = i
				taken[i] = True
				x = balls[i][0]+p
				y = balls[i][1]+q
				break
		if not added: break
		for i in range(start+1,N):
			if balls[i][0]==x and balls[i][1]==y:
				taken[i] = True
				x += p
				y += q
	return ret

def main():
	global N
	global balls
	I = FastScanner()
	O = OutPut()
	N = I.nextInt()
	ans = N
	balls = [[0]*2 for i in range(N)]
	for i in range(N):
		balls[i][0] = I.nextInt()
		balls[i][1] =