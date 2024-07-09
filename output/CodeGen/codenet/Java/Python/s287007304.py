def main():
    s = readline().split(' ')
    a = int(s[0])
    b = int(s[1])
    if b % a == 0:
        print(a + b)
    else:
        print(b - a)

def readline():
    return raw_input()

main()