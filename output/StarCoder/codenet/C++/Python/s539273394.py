import sys

def sosuubunnpu():
    for i in range(1,1001):
        prime_or_not[i] = 0
    for i in range(2,1001):
        for j in range(2,1001/i):
            if(prime_or_not[i]==0):
                prime_or_not[i*j] = 1
    for i in range(2,1001):
        if(prime_or_not[i]==0):
            prime_list[prime_counter] = i
            prime_counter+=1

def innsuubunnkai(N,n):
    time = 0
    while(1):
        if(N%n == 0):
            N = N/n
            time+=1
        else:
            break
    kekka[0] = time
    kekka[1] = N

def main():
    sosuubunnpu()
    N = int(input())
    prime_num = [0 for i in range(1001)]
    for current_num in range(2,N+1):
        kekka[1] = current_num
        for i in range(prime_counter):
            innsuubunnkai(kekka[1],prime_list[i])
            prime_num[i]+=kekka[0]
    result = 1
    for i in range(prime_counter):
        result = (result*(prime_num[i]+1))%1000000007
    print(result)

if __name__ == '__main__':
    main()