import sys
 
def visit():
    dx = [0,1,0,-1]
    dy = [-1,0,1,0]
    sum = 0
    flg = 0
    x = 2
    y = n
    map[y][x] = ' '
    ab = [2,2,2,2]
 
    while(1):
        if(map[y+dy[flg]*2][x+dx[flg]*2] != '#' and map[y+dy[flg]][x+dx[flg]] != ' ' ):
            flg += 1
            #print sum
            break
        map[y+dy[flg]][x+dx[flg]] = ' '
        y = y + dy[flg]
        x = x + dx[flg]
        sum += 1
    if(flg == 4):
        flg = 0
    if(sum == 0):
        break
    ab[0] = ab[1]
    ab[1] = ab[2]
    ab[2]  = sum
    if(ab[0] == 1 and ab[2] == 1 and ab[1] == 1):
        break