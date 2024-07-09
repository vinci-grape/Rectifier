import sys

def sosuubunnpu():
    global prime_or_not
    global prime_list
    global prime_counter
    for i in range(1,1001):
        prime_or_not[i] = 0
    for i in range(2,1001):
        for j in range(2,1001//i):
            if prime_or_not[i] == 0:
                prime_or_not[i*j] = 1
    for i in range(2,1001):
        if prime_or_not[i] == 0:
            prime_list[prime_counter] = i
            prime_counter+=1

def innsuubunnkai(N,n):
    time = 0
    while(1):
        if N%n == 0:
            N = N//n
            time+=1
        else:
            break
    kekka[0] = time
    kekka[1] = N

if __name__ == '__main__':
    sosuubunnpu()
    N = int(sys.stdin.readline().rstrip())
    innsuu = [0]*11
    A = [[0]*11 for i in range(N+1)]
    for i in range(1,1001):
        prime_num[i] = 0
    result = 1
    for current_num in range(2,N+1):
        kekka[1] = current_num
        for i in range(prime_counter):
            innsuubunnkai(kekka[1],prime_list[i])
            prime_num[i]+=kekka[0]
    for current_num in range(2,N+1):
        for i in range(11):
            innsuu[i] += A[current_num][i]
    for i in range(prime_counter):
        result = (result*(prime_num[i]+1))%1000000007
    print(result)