def main():
    sc = Scanner(sys.stdin)
    a = sc.next()
    b = sc.next()
    ju = [False] * 100001
    pe = [0] * 100001
    wa=0
    ac=0
    
    for i in range(b):
        n = sc.next()
        res = sc.next()
        
        if res == "WA" and ju[n-1]!= True:
            pe[n-1] += 1
        
        if res == "AC":
            ju[n-1] = True
        
    for i in range(a):
        if ju[i] and pe[i] > 0:
            ac += 1
            wa += pe[i]
    
    print(ac, wa)

if __name__ == '__main__':
    main()