N, M, D = map(int, input().split())
room = []

for _ in range(N):
    room.append(list(input()))

num = 0

def setWE():
    global num
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

def setNS():
    global num
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

def inputRoom():
    global room
    for i in range(N):
        room.append(list(input()))

inputRoom()

if M >= D:
    setWE()

if N >= D:
    setNS()

print(num)