while True:
    inputed = input()
    if len(inputed) == 1 and inputed == "0":
        break
    
    ans = 0
    for i in range(len(inputed)):
        ans += int(inputed[i])
    
    print(ans)