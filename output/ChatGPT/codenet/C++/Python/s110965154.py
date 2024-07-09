def sort(a_rvecIntValue):
 
    for i in range(len(a_rvecIntValue)):
 
        if i != 0:
 
            iIntValue = a_rvecIntValue[i]
            j = i - 1
            while j >= 0 and a_rvecIntValue[j] > iIntValue:
                a_rvecIntValue[j + 1] = a_rvecIntValue[j]
                j -= 1
            a_rvecIntValue[j + 1] = iIntValue
 
        for k in range(len(a_rvecIntValue)):
            print(a_rvecIntValue[k], end='')
            if k != len(a_rvecIntValue) - 1:
                print(' ', end='')
        print()
 
iNum = int(input())
vecIntValue = []
for _ in range(iNum):
    iIntValue = int(input())
    vecIntValue.append(iIntValue)
 
sort(vecIntValue)