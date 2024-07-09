def main ():
    N = int(input())
    x = long(input())
    srimeList = [long(input()) for _ in range(N)]
    costList = [ [long(input()) for _ in range(N)] for _ in range(N)]
    for i in range(N):
        costList[i][0] = srimeList[i]
        for castNum in range(1,N):
            costList[i][castNum] = min(costList[i][castNum-1], srimeList[(i-castNum+N)%N])
    result = [i*x+sum(costList[i][0:]) for i in range(N)]
    print(min(result))

main ()