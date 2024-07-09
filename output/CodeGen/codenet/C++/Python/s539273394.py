def sosuubunnpu():
    for i in range(1,1000):
        prime_or_not[i] = 0
    for i in range(2,1000):
        for j in range(2,1000/i):
            if prime_or_not[i] == 0:
                prime_or_not[i*j] = 1
    for i in range(2,1000):
        if prime_or_not[i] == 0:
            prime_list[prime_counter] = i
            prime_counter += 1
    
def innsuubunnkai(N,n):
    time = 0
    while 1:
        if N%n == 0:
            N = N/n
            time += 1
        else:
            break
    kekka[0] = time
    kekka[1] = N
    
def main():
    N = int(input())
    innsuu = [0]*11
    for i in range(2,N+1):
        for j in range(0,11):
            innsuu[j] += A[i][j]
    for i in range(0,prime_counter):
        result = (result*(prime_num[i]+1))%1000000007
    print(result)
    
def A(N,n):
    for i in range(2,N+1):
        for j in range(0,11):
            innsuu[j] += A[i][j]
    for i in range(0,prime_counter):
        result = (result*(prime_num[i]+1))%1000000007
    return result

sosuubunnpu()
N = int(input())
innsuu = [0]*11
for i in range(2,N+1):
    for j in range(0,11):
        innsuu[j] += A(i,j)
for i in range(0,prime_counter):
    result = (result*(prime_num[i]+1))%1000000007
print(result)