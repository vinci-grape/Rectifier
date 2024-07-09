import java.util.*;

def main():
    sc = java.util.Scanner(System.in)
    
    numlist = [sc.nextInt() for i in range(5)]
    k = sc.nextInt()
    if (numlist[4] - numlist[0]) > k:
        print ":("
    else:
        print "Yay!"

if __name__ == '__main__':
    main()