import java.util.HashSet;
import java.util.Scanner;
import java.util.Set;

def isMatch(set, c):
    return set.contains(String.valueOf(c))

def main():
    ODD = set(["R", "U", "D"])
    EVE = set(["L", "U", "D"])
    sc = Scanner(System.in)
    N = sc.nextLine()
    tap = N.toCharArray()

    isGood = True
    for i in range(len(N)):
        if (i + 1) % 2 == 0:
            if not isMatch(EVE, tap[i]):
                isGood = False
                break
        else:
            if not isMatch(ODD, tap[i]):
                isGood = False
                break

    print("Yes" if isGood else "No")

if __name__ == "__main__":
    main()