import sys

def moveBomber(a,b):
    if 0 <= a < h and 0 <= b < w:
        if battleTown[a][b] == '^':
            for i in range(a-1, -1, -1):
                if battleTown[i][b] == '*':
                    battleTown[i][b] = '.'
                    return
                elif battleTown[i][b] == '#':
                    return
                else:
                    a -= 1
        elif battleTown[a][b] == 'v':
            for i in range(a+1, h):
                if battleTown[i][b] == '*':
                    battleTown[i][b] = '.'
                    return
                elif battleTown[i][b] == '#':
                    return
                else:
                    a += 1
        elif battleTown[a][b] == '<':
            for i in range(b-1, -1, -1):
                if battleTown[a][i] == '*':
                    battleTown[a][i] = '.'
                    return
                elif battleTown[a][i] == '#':
                    return
                else:
                    b -= 1
        elif battleTown[a][b] == '>':
            for i in range(b+1, w):
                if battleTown[a][i] == '*':
                    battleTown[a][i] = '.'
                    return
                elif battleTown[a][i] == '#':
                    return
                else:
                    b += 1

mapNum = int(input())
for i in range(mapNum):
    if i > 0:
        print()
    h, w = map(int, input().split())
    battleTown = []
    for j in range(h):
        battleTown.append(list(input()))
        if '^' in battleTown[j] or 'v' in battleTown[j] or '<' in battleTown[j] or '>' in battleTown[j]:
            x, y = j, battleTown[j].index('^') if '^' in battleTown[j] else battleTown[j].index('v') if 'v' in battleTown[j] else battleTown[j].index('<') if '<' in battleTown[j] else battleTown[j].index('>')
    bomberActNum = int(input())
    bomberAct = list(input())
    for l in range(bomberActNum):
        if bomberAct[l] == 'U':
            if x-1 >= 0 and battleTown[x-1][y] == '.':
                battleTown[x-1][y] = '^'
                battleTown[x][y] = '.'
                x -= 1
        elif bomberAct[l] == 'D':
            if x+1 < h and battleTown[x+1][y] == '.':
                battleTown[x+1][y] = 'v'
                battleTown[x][y] = '.'
                x += 1
        elif bomberAct[l] == 'L':
            if y-1 >= 0 and battleTown[x][y-1] == '.':
                battleTown[x][y-1] = '<'
                battleTown[x][y] = '.'
                y -= 1
        elif bomberAct[l] == 'R':
            if y+1 < w and battleTown[x][y+1] == '.':
                battleTown[x][y+1] = '>'
                battleTown[x][y] = '.'
                y += 1
        elif bomberAct[l] == 'S':
            xOfBomber, yOfBomber = x, y
            moveBomber(xOfBomber, yOfBomber)
    for s in range(h):
        print(''.join(battleTown[s])) #print Python 3.x
        #print ''.join(battleTown[s]) #print Python 2.x