def main():
    while True:
        try:
            inputed = raw_input()
            if inputed == "0":
                break
            ans = 0
            for i in inputed:
                ans += i - '0'
            print ans
        except EOFError:
            break
 
if __name__ == "__main__":
    main()