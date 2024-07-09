import java.util.Scanner;

def main():
    sc = Scanner(System.in)
    s = sc.nextLine()
    
    for i in range(len(s)):
        c = s[i]
        if c.isupper():
            c = c.lower() + chr(ord(c) + 32)
        elif c.islower():
            c = c.upper() + chr(ord(c) - 32)
        else:
            c = c
        print(c, end='')
    print()
    sc.close()

main()