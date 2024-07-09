import java.util.Scanner;

def main():
	N = int(input())
	M = int(input())
	D = int(input())
	room = []
	for i in range(N):
		room.append(input().split())
	if M >= D:
		setWE()
	if N >= D:
		setNS()
	print(num)

def setWE():
	canPut = True
	for i in range(N):
		for j in range(M - D + 1):
			canPut = True
			for k in range(D):
				if room[i][j + k] == '#':
					canPut = False
					break
			if canPut == True:
				num += 1
	return

def setNS():
	canPut = True
	for i in range(M):
		for j in range(N - D + 1):
			canPut = True
			for k in range(D):
				if room[j + k][i] == '#':
					canPut = False
					break
			if canPut == True:
				num += 1
	return

def inputRoom():
	str_room = ""
	for i in range(N):
		str_room = input()
		room.append(str_room.split())

main()



Output:

2
3
2
2
1