def main():
    t, m = map(int, input().split())
    memory = [0] * m
    allocIdx = 0
    for _ in range(t):
        command = input().split()
        if command[0] == "alloc":
            n = int(command[1])
            len = 0
            canAlloc = False
            for i in range(m):
                if memory[i] == 0:
                    len += 1
                else:
                    len = 0
                if len == n:
                    canAlloc = True
                    len = i - n + 1
                    break
            if canAlloc:
                allocIdx += 1
                for i in range(len, len + n):
                    memory[i] = allocIdx
                print(allocIdx)
            else:
                print("NULL")
        elif command[0] == "erase":
            x = int(command[1])
            if x <= 0:
                print("ILLEGAL_ERASE_ARGUMENT")
                continue
            hasErased = False
            for i in range(m):
                if memory[i] == x:
                    memory[i] = 0
                    hasErased = True
            if not hasErased:
                print("ILLEGAL_ERASE_ARGUMENT")
        elif command[0] == "defragment":
            d = 0
            for i in range(m):
                if memory[i] == 0:
                    d += 1
                else:
                    memory[i - d] = memory[i]
            for i in range(m - d, m):
                memory[i] = 0
        else:
            print("h")

if __name__ == "__main__":
    main()