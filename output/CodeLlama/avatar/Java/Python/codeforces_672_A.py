import sys

def generate_string():
    s = ""
    for i in range(1, 1001):
        s += str(i)
    return s

if __name__ == "__main__":
    n = int(sys.stdin.readline())
    print(generate_string()[n - 1])