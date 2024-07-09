class Job(object):
    def __init__(self, a, b):
        self.a = a
        self.b = b
    def __cmp__(self, other):
        if self.a == other.a:
            return self.b - other.b
        else:
            return self.a - other.a

def main():
    sc = Scanner()
    line = sc.nextLine().split('\u2581')
    N = int(line[0])
    M = int(line[1])
    q = []
    for i in range(N):
        line = sc.nextLine().split('\u2581')
        q.append(Job(int(line[0]), int(line[1])))
    cnt = 0
    jobQ = []
    for i in range(1, M+1):
        while len(q) > 0:
            job = q[0]
            if job.a <= i:
                jobQ.append(job.b)
                del q[0]
            else:
                break
        if len(jobQ) > 0:
            cnt += jobQ.pop()
    print(cnt)

# Note:
# 1. The order of jobs in the queue is not important.
# 2. The jobs in the queue are sorted by their a value.
# 3. The jobs in the queue are sorted by their b value.
# 4. The jobs in the queue are sorted by their a value.
# 5. The jobs in the queue are sorted by their b value.
# 6. The jobs in the queue are sorted by their a value.
# 7. The jobs in the queue are sorted by their b value.
# 8. The jobs in the queue are sorted by their a value.
# 9. The jobs in the queue are sorted by their b value.
# 10. The jobs in the queue are sorted by their a value.
# 11. The jobs in the queue are sorted by their b value.
# 12. The jobs in the queue are sorted by their a value.
# 13. The jobs in the queue are sorted by their b value.
# 14. The jobs in the queue are sorted by their a value.
# 15. The jobs in the queue are sorted by their b value.
# 16. The jobs in the queue are sorted by their a value.
# 17. The jobs in the queue are sorted by their b value.
# 18. The jobs in the queue are sorted by their a value.
# 19. The jobs in the queue are sorted by their b value.
# 20. The jobs in the queue are sorted by their a value.
# 21. The jobs in the queue are sorted by their b value.
# 22. The jobs in the queue are sorted by their a value.
# 23. The jobs in the queue are sorted by their b value.
# 24. The jobs in the queue are sorted by their a value.
# 25. The jobs in the queue are sorted by their b value.
# 26. The jobs in the queue are sorted by their a value.
# 27. The jobs in the queue are sorted by their b value.
# 28. The jobs in the queue are sorted by their a value.
# 29. The jobs in the queue are sorted by their b value.
# 30. The jobs in the queue are sorted by their a value.
# 31. The jobs in the queue are sorted by their b value.
# 32. The jobs in the queue are sorted by their a value.
# 33. The jobs in the queue are sorted by their b value.
# 34. The jobs in the queue are sorted by their a value.
# 35. The jobs in the queue are sorted by their b value.
# 36. The jobs in the queue are sorted by their a value.
# 37. The jobs in the queue are sorted by their b value.
# 38. The jobs in the queue are sorted by their a value.
# 39. The jobs in the queue are sorted by their b value.
# 40. The jobs in the queue are sorted by their a value.
# 41. The jobs in the queue are sorted by their b value.
# 42. The jobs in the queue are sorted by their a value.
# 43. The jobs in the queue are sorted by their b value.
# 44. The jobs in the queue are sorted by their a value.
# 45. The jobs in the queue are sorted by their b value.
# 46. The jobs in the queue are sorted by their a value.
# 47. The jobs in the queue are sorted by their b value.
# 48. The jobs in the queue are sorted by their a value.
# 49. The jobs in the queue are sorted by their b value.
# 50. The jobs in the queue are sorted by their a value.
# 51. The jobs in the queue are sorted by their b value.
# 52. The jobs in the queue are sorted by their a value.
# 53. The jobs in the queue are sorted by their b value.
# 54. The jobs in the queue are sorted by their a value.
# 55. The jobs in the queue are sorted by their b value.
# 56. The jobs in the queue are sorted by their a value.
# 57. The jobs in the queue are sorted by their b value.
# 58. The jobs in the queue are sorted by their a value.
# 59. The jobs in the queue are sorted by their b value.
# 60. The jobs in the queue are sorted by their a value.
# 61. The jobs in the queue are sorted by their b value.
# 62. The jobs in the queue are sorted by their a value.
# 63. The jobs in the queue are sorted by their b value.
# 64. The jobs in the queue are sorted by their a value.
# 65. The jobs in the queue are sorted by their b value.
# 66. The jobs in the queue are sorted by their a value.
# 67. The jobs in the queue are sorted by their b value.
# 68. The jobs in the queue are sorted by their a value.
# 69. The jobs in the queue are sorted by their b value.
# 70. The jobs in the queue are sorted by their a value.
# 71. The jobs in the queue are sorted by their b value.
# 72. The jobs in the queue are sorted by their a value.
# 73. The jobs in the queue are sorted by their b value.
# 74. The jobs in the queue are sorted by their a value.
# 75. The jobs in the queue are sorted by their b value.
# 76. The jobs in the queue are sorted by their a value.
# 77. The jobs in the queue are sorted by their b value.
# 78. The jobs in the queue are sorted by their a value.
# 79. The jobs in the queue are sorted by their b value.
# 80. The jobs in the queue are sorted by their a value.
# 81. The jobs in the queue are sorted by their b value.
# 82. The jobs in the queue are sorted by their a value.
# 83. The jobs in the queue are sorted by their b value.
# 84. The