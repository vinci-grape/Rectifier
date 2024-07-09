def main(args):
    cin = input()
    a = ""
    b = ""
    n = int(input())
    for i in range(n//2):
        a += input()
    if a+a == str(n)+str(n):
        print("Yes")
    else:
        print("No")