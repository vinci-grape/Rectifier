# Python program For handling Input/Output 
import sys 
import math 

class Main:
    def __init__(self):
        self.max = 0
        self.cur = 0

    # actual logic
    def solve(self):
        a = int(input())
        b = int(input())

        print(max(0, a-2*b))

    # main method
    def main(self):
        self.solve()

    # Utility methods
    # input an integer from input()
    def ni(self):
        a = int(input())
        return a

    # input a long from input()
    def nl(self):
        return int(input())

    # input a float from input()
    def nf(self):
        a = float(input())
        return a

    # input a double from input()
    def nd(self):
        a = float(input())
        return a

    # input a sentence from input()
    def ns(self):
        return input()

    # converts a string to a list of strings
    def nst(self, s):
        return s.split()

    # input an integer array
    def ia(self, a):
        a = list(map(int, input().split()))

    # input a long array
    def la(self, a):
        a = list(map(int, input().split()))

    # input a float array
    def fa(self, a):
        a = list(map(float, input().split()))

    # input a double array
    def da(self, a):
        a = list(map(float, input().split()))

    # input a string array either with all empty input or from input()
    def sa(self, a, empty):
        if empty:
            for i in range(len(a)):
                a[i] = ""
        else:
            for i in range(len(a)):
                a[i] = input()

    # input a two-dimensional integer array
    def ida(self, a, n, m):
        for i in range(n):
            for j in range(m):
                a[i][j] = int(input())

    # input a two-dimensional long array
    def lda(self, a, n, m):
        for i in range(n):
            for j in range(m):
                a[i][j] = int(input())

    # input a two-dimensional double array
    def dda(self, a, n, m):
        for i in range(n):
            for j in range(m):
                a[i][j] = float(input())

    # convert string to integer
    def stoi(self, s):
        return int(s)

    # convert string to double
    def stod(self, s):
        return float(s)

    # find minimum in a long array
    def lmin(self, a):
        return min(a)

    # find minimum in an integer array
    def imin(self, a):
        return min(a)

    # find maximum in a long array
    def lmax(self, a):
        return max(a)

    # find maximum in an integer array
    def imax(self, a):
        return max(a)

    # check whether an element is present in an integer array
    def ibs(self, a, toFind):
        return toFind in a

    # check whether an element is present in a long array
    def lbs(self, a, toFind):
        return toFind in a

    def stb(self, s):
        sum = 0
        k = 0
        for i in range(len(s) - 1, -1, -1):
            sum += int(s[i]) * math.pow(2, k)
            k += 1
        return sum

if __name__ == "__main__":
    main = Main()
    main.main()