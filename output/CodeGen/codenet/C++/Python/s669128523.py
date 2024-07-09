#!/usr/bin/python

import sys

# N is the number of vertices in the graph
N = 100

# M[i][j] is true if there is a directed edge from vertex i to vertex j
M = [[0] * N for i in range(N)]

# n is the number of vertices in the graph
n = int(sys.argv[1])

# color[i] is the color of vertex i
color = [WHITE] * N

# d[i] is the depth-first search number of vertex i
d = [0] * N

# f[i] is the finish number of vertex i
f = [0] * N

# tt is the depth-first search number
tt = 0

# dfs_visit(u) is called when vertex u is first visited
def dfs_visit(u):
	global tt
	global color
	global d
	global f
	global n
	
	# Mark the current vertex as GRAY
	color[u] = GRAY
	
	# d[u] is the depth-first search number of vertex u
	d[u] = tt
	
	# For each adjacent vertex v
	for v in range(n):
		if M[u][v] == 1 and color[v] == WHITE:
			# Recursively dfs_visit(v)
			dfs_visit(v)
	
	# Mark the current vertex as BLACK
	color[u] = BLACK
	
	# f[u] is the finish number of vertex u
	f[u] = tt
	
	# Increment the depth-first search number
	tt += 1
	
# dfs() is called to perform depth-first search
def dfs():
	global tt
	global color
	global d
	global f
	global n
	
	# For each vertex u in graph
	for u in range(n):
		if color[u] == WHITE:
			# Recursively dfs_visit(u)
			dfs_visit(u)
	
	# Print the depth-first search number
	for u in range(n):
		print u + 1, d[u], f[u]
	
# Driver program to test above functions
def main():
	# Read the number of vertices n
	n = int(sys.argv[1])
	
	# Fill the adjacency matrix M
	for i in range(n):
		for j in range(n):
			M[i][j] = 0
	
	# Fill the adjacency matrix M
	for i in range(n):
		for j in range(n):
			M[i][j] = 0
	
	# Read the graph and create the adjacency matrix
	for i in range(n):
		for j in range(n):
			u = int(sys.argv[2 + i])
			v = int(sys.argv[3 + i])
			M[u - 1][v - 1] = 1
	
	# Call the dfs() function to perform depth-first search
	dfs()

# Call the main function
main()