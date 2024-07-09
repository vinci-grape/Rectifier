# Python program For handling Input/Output 
import sys
import math

#actual logic
def solve():
    a = int(sys.stdin.readline())
    b = int(sys.stdin.readline())

    print(max(0, a-2*b))





#main metohd
def main():
    solve()


#Utility methods
#input an integer from scanner
def ni():
    return int(sys.stdin.readline())

#input a long from scanner
def nl():
    return int(sys.stdin.readline())

#input a float from scanner
def nf():
    return float(sys.stdin.readline())

#input a double from scanner
def nd():
    return float(sys.stdin.readline())

#input a sentence from scanner
def ns():
    return sys.stdin.readline()

#converts a string to stringtokenizer
def nst(s):
    return s.split()

#input an intger array
def ia(a):
    for i in range(len(a)):
        a[i] = int(sys.stdin.readline())

#input a long array
def la(a):
    for i in range(len(a)):
        a[i] = int(sys.stdin.readline())

#input a float array
def fa(a):
    for i in range(len(a)):
        a[i] = float(sys.stdin.readline())

#input a double array
def da(a):
    for i in range(len(a)):
        a[i] = float(sys.stdin.readline())

#input a string array either with all empty input or from scanner
def sa(a, empty):
    if empty:
        for i in range(len(a)):
            a[i] = ""
    else:
        for i in range(len(a)):
            a[i] = sys.stdin.readline()

#input two dimensional integer array
def ida(a, n, m):
    for i in range(n):
        for j in range(m):
            a[i][j] = int(sys.stdin.readline())

#input two dimentional long array
def lda(a, n, m):
    for i in range(n):
        for j in range(m):
            a[i][j] = int(sys.stdin.readline())

#input two dimensional double array
def dda(a, n, m):
    for i in range(n):
        for j in range(m):
            a[i][j] = float(sys.stdin.readline())

#convert string to integer
def stoi(s):
    return int(s)

#convert string to double
def stod(s):
    return float(s)

#find minimum in a long array
def lmin(a):
    min = sys.maxsize
    for i in range(len(a)):
        if min > a[i]:
            min = a[i]
    return min

#find minimum in a integer array
def imin(a):
    min = sys.maxsize
    for i in range(len(a)):
        if min > a[i]:
            min = a[i]
    return min

#find maximum in a long array
def lmax(a):
    max = -sys.maxsize
    for i in range(len(a)):
        if max < a[i]:
            max = a[i]
    return max

#find maximum in an integer array
def imax(a):
    max = -sys.maxsize
    for i in range(len(a)):
        if max < a[i]:
            max = a[i]
    return max

#check whether an element is present in an integer array by binary search
def ibs(a, toFind):
    a.sort()
    min = 0
    max = len(a)-1
    found = False

    while min <= max and not found:
        mid = min + (max-min)//2
        if a[mid] == toFind:
           found = True
        elif toFind > a[mid]:
            min = mid+1
        else:
            max = mid-1

    return found

#check whether an element is present in a long array
def lbs(a, toFind):
    a.sort()
    min = 0
    max = len(a)-1
    found = False

    while min <= max and not found:
        mid = min + (max-min)//2
        if a[mid] == toFind:
           found = True
        elif toFind > a[mid]:
            min = mid+1
        else:
            max = mid-1

    return found

def stb(s):
    sum = 0
    k = 0
    for i in range(len(s)-1, -1, -1):
        sum += int(s[i]) * math.pow(2, k)
        k += 1
    return sum


#constructor
def __init__():
    try:
        sys.stdin = open("input.txt", "r")
    except:
        pass


#main metohd
if __name__ == "__main__":
    __init__()
    main()