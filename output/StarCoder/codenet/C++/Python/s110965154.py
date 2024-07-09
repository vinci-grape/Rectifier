def sort(a_rvecIntValue):
    for i in range(len(a_rvecIntValue)):
        if i!= 0:
            iIntValue = a_rvecIntValue[i]
            j = i - 1
            while j >= 0 and a_rvecIntValue[j] > iIntValue:
                a_rvecIntValue[j+1] = a_rvecIntValue[j]
                j -= 1
            a_rvecIntValue[j+1] = iIntValue
    for i in a_rvecIntValue:
        print i,

if __name__ == "__main__":
    a_rvecIntValue = []
    while True:
        try:
            a_rvecIntValue.append(int(raw_input()))
        except:
            break
    sort(a_rvecIntValue)