def sosuubunnpu():
    global prime_or_not, prime_list, prime_num, prime_counter
    prime_or_not = [0] * 1001
    prime_list = [0] * 1001
    prime_num = [0] * 1001
    prime_counter = 0
    for i in range(2, 1001):
        for j in range(2, 1001 // i + 1):
            if prime_or_not[i] == 0:
                prime_or_not[i * j] = 1
    for i in range(2, 1001):
        if prime_or_not[i] == 0:
            prime_list[prime_counter] = i
            prime_counter += 1

def innsuubunnkai(N, n):
    global kekka
    time = 0
    while True:
        if N % n == 0:
            N = N // n
            time += 1
        else:
            break
    kekka = [time, N]

sosuubunnpu()
N = int(input())
innsuu = [0] * 11
A = [[0] * 11 for _ in range(N + 1)]
prime_num = [0] * 1001
result = 1

for current_num in range(2, N + 1):
    kekka[1] = current_num
    for i in range(prime_counter):
        innsuubunnkai(kekka[1], prime_list[i])
        prime_num[i] += kekka[0]

for current_num in range(2, N + 1):
    for i in range(11):
        innsuu[i] += A[current_num][i]

for i in range(prime_counter):
    result = (result * (prime_num[i] + 1)) % 1000000007

print(result)