m = [10, 50, 100, 500]

while True:
    money = int(input())
    if money == 0:
        break
    
    if money != 0:
        sum = 0
        num = [0] * 4
        for i in range(4):
            num[i] = int(input())
            sum += num[i] * m[i]
        
        change = sum - money
        for i in range(3, -1, -1):
            if change // m[i]:
                num[i] = num[i] - change // m[i]
                change %= m[i]
        
        for i in range(4):
            if num[i] > 0:
                print(m[i], num[i])