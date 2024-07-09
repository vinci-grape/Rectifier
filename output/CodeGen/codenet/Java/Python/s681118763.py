import sys

def main():
    in_str = sys.stdin.readline()
    c = in_str.strip()
    letter = c[0]
    letter += 1
    print(letter)

main()