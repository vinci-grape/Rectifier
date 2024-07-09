import sys
import io

def main(args):
    input = io.TextIOWrapper(sys.stdin.buffer, encoding='utf-8')
    output = io.TextIOWrapper(sys.stdout.buffer, encoding='utf-8')
    n, d = input.readline().strip().split(' ')
    n = int(n)
    d = int(d)
    cnt = 0
    for i in range(n):
        x, y = input.readline().strip().split(' ')
        x = int(x)
        y = int(y)
        if (math.sqrt(x * x + y * y) <= d):
            cnt += 1
    output.write(str(cnt))

if __name__ == '__main__':
    main(sys.argv)