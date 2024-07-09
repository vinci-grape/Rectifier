import java.util.ArrayList
import java.util.Scanner

def main(args):
    result = []
    n = -1
    while True:
        line = raw_input()
        n = int(line)
        if n == 0:
            break
        for i in range(n):
            line = raw_input()
            array2 = line.split()
            input = [int(i) for i in array2]
            sum = 0
            for i in input:
                sum += i
            avg = sum / n
            num = 0
            for i in input:
                if i <= avg:
                    num += 1
            result.append(num)
    for i in result:
        if i == -1:
            print "NONE"
        else:
            print i

if __name__ == '__main__':
    main(sys.argv)