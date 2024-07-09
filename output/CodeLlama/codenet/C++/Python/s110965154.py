#!/usr/bin/python
# -*- coding: utf-8 -*-
 
def sort(a_rvecIntValue):
    for i in range(0, len(a_rvecIntValue)):
        if i != 0:
            iIntValue = a_rvecIntValue[i]
            j = i - 1
            while (j >= 0) and (a_rvecIntValue[j] > iIntValue):
                a_rvecIntValue[j+1] = a_rvecIntValue[j]
                j -= 1
            a_rvecIntValue[j+1] = iIntValue
        for k in range(0, len(a_rvecIntValue)):
            print a_rvecIntValue[k],
        print
 
if __name__ == '__main__':
    iNum = 0
    iNum = int(raw_input())
    vecIntValue = []
    while iNum:
        iIntValue = 0
        iIntValue = int(raw_input())
        vecIntValue.append(iIntValue)
        iNum -= 1
 
    sort(vecIntValue)