def dfs(crt, parent):
    global visited, odd, print_str
    visited[crt] = 1
    crt_connect = connect[crt]
    for child in crt_connect:
        if child == parent or visited[child] == 1:
            continue
        elif visited[child] == 2:
            print_str.append(str(crt + 1) + " " + str(child + 1) + "\n")
            odd[crt] = not odd[crt]
        else:
            dfs(child, crt)
            if odd[child]:
                print_str.append(str(child + 1) + " " + str(crt + 1) + "\n")
                odd[child] = not odd[child]
            else:
                print_str.append(str(crt + 1) + " " + str(child + 1) + "\n")
                odd[crt] = not odd[crt]
    visited[crt] = 2

num_node, num_edge = map(int, input().split())
connect = [[] for _ in range(num_node)]
for _ in range(num_edge):
    a, b = map(int, input().split())
    connect[a - 1].append(b - 1)
    connect[b - 1].append(a - 1)

if num_edge % 2 != 0:
    print(-1)
else:
    visited = [0] * num_node
    odd = [False] * num_node
    print_str = []
    dfs(0, -1)
    print("".join(print_str))