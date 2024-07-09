def main(args):
    try:
        n = int(input())
        sqrt = int(math.sqrt(n))
        answer = 0
        for i in range(2, sqrt + 1):
            count = 0
            while 0 == (n % i):
                n //= i
                count += 1
            for j in range(1, count):
                count -= j
                answer += 1
        if n > 1:
            answer += 1
        print(answer)
    except Exception as e:
        print(e)