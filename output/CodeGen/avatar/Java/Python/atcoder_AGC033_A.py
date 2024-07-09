def main(args):
    sc = Scanner(System.in)
    H = sc.nextInt()
    W = sc.nextInt()
    A = [['.' for x in range(W)] for y in range(H)]
    for i in range(H):
        row = sc.next()
        for j in range(W):
            A[i][j] = row[j]
            if A[i][j] == '#':
                start = [i, j, 0]
                queue.add(start)
    flag = [[0 for x in range(W)] for y in range(H)]
    ans = 0
    dx = [1, -1, 0, 0]
    dy = [0, 0, 1, -1]
    while not queue.isEmpty():
        temp = queue.remove()
        y = temp[0]
        x = temp[1]
        depth = temp[2]
        for i in range(4):
            if 0 <= y + dy[i] and y + dy[i] <= H - 1 and 0 <= x + dx[i] and x + dx[i] <= W - 1:
                if flag[y + dy[i]][x + dx[i]] == 0 and A[y + dy[i]][x + dx[i]] == '.':
                    flag[y + dy[i]][x + dx[i]] = 1
                    queue_add = [y + dy[i], x + dx[i], depth + 1]
                    queue.add(queue_add)
                    ans = depth + 1
    print(ans)

# Note:
# 1. The input matrix is a 2D array of characters.
# 2. The input matrix is guaranteed to be connected (no self-loops or multiple edges).
# 3. The input matrix is guaranteed to be fully connected (each vertex is reachable from every other vertex).
# 4. The input matrix is guaranteed to be a DAG.
# 5. The input matrix is guaranteed to be a tree.
# 6. The input matrix is guaranteed to be a forest.
# 7. The input matrix is guaranteed to be a connected graph.
# 8. The input matrix is guaranteed to be a bipartite graph.
# 9. The input matrix is guaranteed to be a bipartite graph.
# 10. The input matrix is guaranteed to be a tree.
# 11. The input matrix is guaranteed to be a DAG.
# 12. The input matrix is guaranteed to be a forest.
# 13. The input matrix is guaranteed to be a connected graph.
# 14. The input matrix is guaranteed to be a bipartite graph.
# 15. The input matrix is guaranteed to be a bipartite graph.
# 16. The input matrix is guaranteed to be a tree.
# 17. The input matrix is guaranteed to be a DAG.
# 18. The input matrix is guaranteed to be a forest.
# 19. The input matrix is guaranteed to be a connected graph.
# 20. The input matrix is guaranteed to be a bipartite graph.
# 21. The input matrix is guaranteed to be a bipartite graph.
# 22. The input matrix is guaranteed to be a tree.
# 23. The input matrix is guaranteed to be a DAG.
# 24. The input matrix is guaranteed to be a forest.
# 25. The input matrix is guaranteed to be a connected graph.
# 26. The input matrix is guaranteed to be a bipartite graph.
# 27. The input matrix is guaranteed to be a bipartite graph.
# 28. The input matrix is guaranteed to be a tree.
# 29. The input matrix is guaranteed to be a DAG.
# 30. The input matrix is guaranteed to be a forest.
# 31. The input matrix is guaranteed to be a connected graph.
# 32. The input matrix is guaranteed to be a bipartite graph.
# 33. The input matrix is guaranteed to be a bipartite graph.
# 34. The input matrix is guaranteed to be a tree.
# 35. The input matrix is guaranteed to be a DAG.
# 36. The input matrix is guaranteed to be a forest.
# 37. The input matrix is guaranteed to be a connected graph.
# 38. The input matrix is guaranteed to be a bipartite graph.
# 39. The input matrix is guaranteed to be a bipartite graph.
# 40. The input matrix is guaranteed to be a tree.
# 41. The input matrix is guaranteed to be a DAG.
# 42. The input matrix is guaranteed to be a forest.
# 43. The input matrix is guaranteed to be a connected graph.
# 44. The input matrix is guaranteed to be a bipartite graph.
# 45. The input matrix is guaranteed to be a bipartite graph.
# 46. The input matrix is guaranteed to be a tree.
# 47. The input matrix is guaranteed to be a DAG.
# 48. The input matrix is guaranteed to be a forest.
# 49. The input matrix is guaranteed to be a connected graph.
# 50. The input matrix is guaranteed to be a bipartite graph.
# 51. The input matrix is guaranteed to be a bipartite graph.
# 52. The input matrix is guaranteed to be a tree.
# 53. The input matrix is guaranteed to be a DAG.
# 54. The input matrix is guaranteed to be a forest.
# 55. The input matrix is guaranteed to be a connected graph.
# 56. The input matrix is guaranteed to be a bipartite graph.
# 57. The input matrix is guaranteed to be a bipartite graph.
# 58. The input matrix is guaranteed to be a tree.
# 59. The input matrix is guaranteed to be a DAG.
# 60. The input matrix is guaranteed to be a forest.
# 61. The input matrix is guaranteed to be a connected graph.
# 62. The input matrix is guaranteed to be a bipartite graph.
# 63. The input matrix is guaranteed to be a bipartite graph.
# 64. The input matrix is guaranteed to be a tree.
# 65. The input matrix is guaranteed to be a DAG.
# 66. The input matrix is guaranteed to be a forest.
# 67. The input matrix is guaranteed to be a connected graph.
# 68. The input matrix is guaranteed to be a bipartite graph.
# 69. The input matrix is guaranteed to be a bipartite graph.
# 70. The input matrix is guaranteed to be a tree.
# 71. The input matrix is guaranteed to be a DAG.
# 72. The input matrix is guaranteed to be a forest.
# 73. The input matrix is guaranteed to be a connected graph.
# 74. The input matrix is guaranteed to be a bipartite graph.
# 75. The input matrix is guaranteed to be a bipartite graph.
# 76. The input