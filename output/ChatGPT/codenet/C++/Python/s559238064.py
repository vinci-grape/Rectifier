# Python code equivalent to the given C++ code
import math

def main():
    a, b, c, d, e, f, g, T = 0, 0, 0, 0, 0, 0, 0, 0
    z = input()
    a = len(z)
    for i in range(a - 1):
        if z[i] == z[i + 1]:
            print("Bad")
            return
    print("Good")

if __name__ == "__main__":
    main()