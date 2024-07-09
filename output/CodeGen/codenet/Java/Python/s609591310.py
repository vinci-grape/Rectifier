import java.util.*;

def main(args):
    n = int(raw_input())
    list = map(int, raw_input().split())
    
    numlist1 = [0] * 100000
    numlist2 = [0] * 100000
    
    for i in range(n):
        numlist1[list[i]-1] += 1
        numlist2[list[i+1]-1] += 1
    
    max11 = 0
    max12 = 0
    max21 = 0
    max22 = 0
    
    for i in range(100000):
        if numlist1[i] >= max11:
            max12 = max11
            max11 = numlist1[i]
            val1 = i
        else if numlist1[i] >= max12:
            max12 = numlist1[i]
    
        if numlist2[i] >= max21:
            max22 = max21
            max21 = numlist2[i]
            val2 = i
        else if numlist2[i] >= max22:
            max22 = numlist2[i]
    
    if val1!= val2:
        ans = n - max11 - max21
    else:
        ans = n - max12 - max22
    
    print ans

if __name__ == '__main__':
    main(sys.argv)