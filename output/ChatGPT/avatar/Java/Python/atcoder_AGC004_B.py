import sys

def main():
    input = sys.stdin.readline
    N, x = map(int, input().split())
    srimeList = [int(input()) for _ in range(N)]
    costList = [[0] * N for _ in range(N)]
    for i in range(N):
        costList[i][0] = srimeList[i]
        for castNum in range(1, N):
            costList[i][castNum] = min(costList[i][castNum - 1], srimeList[(i - castNum + N) % N])
    result = []
    for i in range(N):
        result.append(i * x + sum(costArray[i] for costArray in costList))
    print(min(result))

if __name__ == "__main__":
    main()