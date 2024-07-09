import sys

N = int(sys.stdin.readline())
a = [int(sys.stdin.readline()) for i in range(N)]
ind_a = [0] * N
for i in range(N):
    ind_a[a[i] - 1] = i

used_inds = set()
ans = 0
for i in range(N):
    left_border = -1
    right_border = N
    cur_ind = ind_a[i]
    left_it = used_inds.lower_bound(cur_ind)
    right_it = used_inds.lower_bound(cur_ind + 1)

    if left_it == used_inds.begin():
        left_border = -1
    else:
        if left_it == used_inds.end() or left_it > cur_ind:
            left_it -= 1
        left_border = left_it

    if right_it == used_inds.end():
        right_border = N
    else:
        right_border = right_it

    ans += (cur_ind - left_border) * (right_border - cur_ind) * (i + 1)

    used_inds.add(cur_ind)

print(ans)