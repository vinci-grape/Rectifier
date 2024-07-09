#coding:utf-8
def main():
    n = int(input())
    maps = [0]*(n+1)
    num = [0]*(n+1)
    for i in range(1,n+1):
        maps[i] = int(input())
        num[i] = maps[i]
    maps.sort()
    m = n//2
    for i in range(1,n+1):
        if num[i] <= maps[m]:
            print(maps[m+1])
        else:
            print(maps[m])
if __name__ == "__main__":
    main()