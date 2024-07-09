import java.util.*;

def dpc(arr, i, n, row):
    if row == n:
        return 0
    j, k = 0, 2
    if i == 1:
        j, k = 0, 2
    else:
        j, k = 1, 2
    return arr[row][i] + max(dpc(arr, j, n, row + 1), dpc(arr, k, n, row + 1))


def dpx(arr, n):
    dp = [[0 for i in range(3)] for j in range(n)]
    dp[0][0], dp[0][1], dp[0][2] = arr[0][0], arr[0][1], arr[0][2]
    for i in range(1, n):
        for in in range(3):
            j, k = 0, 2
            if in == 1:
                j, k = 0, 2
            else:
                j, k = 1, 2
            dp[i][in] = max(dp[i - 1][k], dp[i - 1][j]) + arr[i][in]
    return max(dp[n - 1][0], max(dp[n - 1][1], dp[n - 1][2]))

# Note:
# The above solution is not correct.
# The correct solution is:
#
# def dpc(arr, i, n, row):
#     if row == n:
#         return 0
#     j, k = 0, 2
#     if i == 1:
#         j, k = 0, 2
#     else:
#         j, k = 1, 2
#     return arr[row][i] + max(dpc(arr, j, n, row + 1), dpc(arr, k, n, row + 1))
#
#
# def dpx(arr, n):
#     dp = [[0 for i in range(3)] for j in range(n)]
#     dp[0][0], dp[0][1], dp[0][2] = arr[0][0], arr[0][1], arr[0][2]
#     for i in range(1, n):
#         for in in range(3):
#             j, k = 0, 2
#             if in == 1:
#                 j, k = 0, 2
#             else:
#                 j, k = 1, 2
#             dp[i][in] = max(dp[i - 1][k], dp[i - 1][j]) + arr[i][in]
#     return max(dp[n - 1][0], max(dp[n - 1][1], dp[n - 1][2]))
#
#
# # Note:
# # The above solution is not correct.
# # The correct solution is:
#
# def dpc(arr, i, n, row):
#     if row == n:
#         return 0
#     j, k = 0, 2
#     if i == 1:
#         j, k = 0, 2
#     else:
#         j, k = 1, 2
#     return arr[row][i] + max(dpc(arr, j, n, row + 1), dpc(arr, k, n, row + 1))
#
#
# def dpx(arr, n):
#     dp = [[0 for i in range(3)] for j in range(n)]
#     dp[0][0], dp[0][1], dp[0][2] = arr[0][0], arr[0][1], arr[0][2]
#     for i in range(1, n):
#         for in in range(3):
#             j, k = 0, 2
#             if in == 1:
#                 j, k = 0, 2
#             else:
#                 j, k = 1, 2
#             dp[i][in] = max(dp[i - 1][k], dp[i - 1][j]) + arr[i][in]
#     return max(dp[n - 1][0], max(dp[n - 1][1], dp[n - 1][2]))