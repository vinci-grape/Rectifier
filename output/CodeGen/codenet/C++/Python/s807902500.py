def main():
    s,t = input().split()
    s += s
    print(s.find(t)+1)

main()