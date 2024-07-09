import sys

mapNum = int(sys.stdin.readline())

for i in range(mapNum):
    if(1<=i and i< mapNum):
        print("")
    h = int(sys.stdin.readline())
    w = int(sys.stdin.readline())

    battleTown = []
    for j in range(h):
        battleTown.append(list(sys.stdin.readline().strip()))

    for j in range(h):
        for k in range(w):
            print(battleTown[j][k],end="")
        print()

    bomberActNum = int(sys.stdin.readline())
    bomberAct = list(sys.stdin.readline().strip())

    x = 0
    y = 0
    for j in range(h):
        for k in range(w):
            if('^'==battleTown[j][k]
            or'v'==battleTown[j][k]
            or'<'==battleTown[j][k]
            or'>'==battleTown[j][k]):
                x = j
                y = k

    for l in range(bomberActNum):
        if(bomberAct[l] == 'U'):
            battleTown[x][y] ='^'
            if(x-1 >=0 and battleTown[x-1][y]=='.'):
                battleTown[x-1][y] ='^'
                battleTown[x][y] ='.'
                x-=1
        if(bomberAct[l] == 'D'):
            battleTown[x][y] ='v'
            if(x+1 <h and battleTown[x+1][y]=='.'):
                battleTown[x+1][y] ='v'
                battleTown[x][y] ='.'
                x+=1
        if(bomberAct[l] == 'L'):
            battleTown[x][y] ='<'
            if(y-1 >=0 and battleTown[x][y-1]=='.'):
                battleTown[x][y-1] ='<'
                battleTown[x][y] ='.'
                y-=1
        if(bomberAct[l] == 'R'):
            battleTown[x][y] ='>'
            if(y+1 <w and battleTown[x][y+1]=='.'):
                battleTown[x][y+1] ='>'
                battleTown[x][y] ='.'
                y+=1
        if(bomberAct[l] == 'S'):
            xOfBomber = x
            yOfBomber = y
            moveBomber(xOfBomber,yOfBomber)

    for j in range(h):
        for k in range(w):
            print(battleTown[j][k],end="")
        print()

def moveBomber(a,b):
    while(True):
        if(0 <= a and a <= h and 0<= b and b <= w):
            if('^'==battleTown[a][b]):
                for i in range(a-1,0,-1):
                    if(a<=0):
                        return
                    else:
                        if(battleTown[a-1][b]=='*'):
                            battleTown[a-1][b]='.'
                            return
                        elif(battleTown[a-1][b]=='#'):
                            return
                        else:
                            a-=1
                            if(a==0):
                                return
            if('v'==battleTown[a][b]):
                for i in range(a+1,h):
                    if(a==h):
                        return
                    else:
                        if(battleTown[a+1][b]=='*'):
                            battleTown[a+1][b]='.'
                            return
                        elif(battleTown[a+1][b]=='#'):
                            return
                        else:
                            a+=1
                            if(a==h):