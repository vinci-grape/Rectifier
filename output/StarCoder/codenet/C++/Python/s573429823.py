n = int(raw_input())
if n<4:
    print "No"
else:
    for i in range(n/4+1):
        for j in range(n/7+1):
            if i*4+j*7 == n:
                print "Yes"
                break
        else:
            continue
        break
    else:
        print "No"