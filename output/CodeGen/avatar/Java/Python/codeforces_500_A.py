def dfs(currpos, arr, target):
    if currpos == target:
        return True
    if currpos == len(arr) + 1:
        return False
    teleport = dfs(currpos + arr[currpos - 1], arr, target)
    if teleport:
        return True
    return False

def main():
    n = int(input())
    goal = int(input())
    arr = [int(x) for x in input().split()]
    isFound = dfs(1, arr, goal)
    if isFound:
        print("YES")
    else:
        print("NO")

main()