#!/usr/bin/python

import sys

def sort(a_rvecIntValue):
    for i in range(0, len(a_rvecIntValue)):
        if i!= 0:
            int iIntValue = a_rvecIntValue[i]
            int j = i - 1
            while ((j >= 0) and (a_rvecIntValue[j] > iIntValue)):
                a_rvecIntValue[j+1] = a_rvecIntValue[j]
                j -= 1
            a_rvecIntValue[j+1] = iIntValue
        for k in range(0, len(a_rvecIntValue)):
            print a_rvecIntValue[k]
            if k!= len(a_rvecIntValue) - 1:
                print " ",
        print

if __name__ == "__main__":
    if len(sys.argv)!= 2:
        print "Usage:", sys.argv[0], "n"
        sys.exit(1)
    n = int(sys.argv[1])
    a_rvecIntValue = [0] * n
    for i in range(0, n):
        a_rvecIntValue[i] = i
    sort(a_rvecIntValue)