n=int(input())
array=[]
for i in range(n):
    array.append(int(input()))
sum=0
for i in range(n-1):
    for j in range(i+1,n):
        sum+=array[i]*array[j]
print(sum)