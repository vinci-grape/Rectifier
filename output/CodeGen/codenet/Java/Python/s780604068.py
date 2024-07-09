def main():
    sc = Scanner(System.in)
    N = sc.nextInt()
    
    map = [0] * (N * 2)
    for i in range(N * 2):
        map[i] = sc.nextInt()
    
    map.sort()
    
    max = 0
    for i in range(N * 2):
        max += min(map[i], map[i + 1])
    
    print(max)

def min(a, b):
    if a < b:
        return a
    else:
        return b

main()