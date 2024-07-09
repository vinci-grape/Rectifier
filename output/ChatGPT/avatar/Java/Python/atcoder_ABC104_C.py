INF = 100000

def main():
    D = int(input())
    G = int(input())
    p = []
    c = []
    for _ in range(D):
        p_i, c_i = map(int, input().split())
        p.append(p_i)
        c.append(c_i)

    min_num = INF
    for bit in range(1 << D):
        score = 0
        solve_num = 0
        for i in range(D):
            if bit & (1 << i):
                score += 100 * (i + 1) * p[i] + c[i]
                solve_num += p[i]
        
        if score < G:
            for i in range(D-1, -1, -1):
                if bit & (1 << i) == 0:
                    for j in range(p[i] - 1):
                        score += 100 * (i + 1)
                        solve_num += 1
                        if score >= G:
                            break
        
        if score >= G:
            min_num = min(min_num, solve_num)
    
    print(min_num)

if __name__ == "__main__":
    main()