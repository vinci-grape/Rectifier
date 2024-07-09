from collections import defaultdict

m = defaultdict(int)
for i in range(5001):
    for j in range(5001):
        for k in range(5001):
            w = i*200+j*300+k*500
            p = i/5*5*380*0.8+i%5*380+j/4*4*550*0.85+j%4*550+k/3*3*850*0.88+k%3*850
            m[w] = min(m[w], p)

while True:
    try:
        n = int(input())
        print(m[n])
    except:
        break