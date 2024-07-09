def main ():
    M = 1000000007
    s = input().strip().lower()
    n = len(s)
    dp = [[0, 0] for i in range(n + 1)]
    dp[0][0] = 1
    for i in range(n):
        if s[i] == '0':
            dp[i + 1][0] = dp[i][0]
            dp[i + 1][1] = dp[i][1]
        else:
            dp[i + 1][1] = (dp[i][0] + dp[i][1]) % M
            if s[i] == '0':
                dp[i + 1][1] += (dp[i][1] * 2) % M
                dp[i + 1][1] %= M
            else:
                dp[i + 1][0] += (dp[i][0] * 2) % M
                dp[i + 1][1] += (dp[i][1] * 2) % M
                dp[i + 1][0] %= M
                dp[i + 1][1] %= M
    print((dp[n][0] + dp[n][1]) % M)

# Note:
# 1. The input string is lowercase.
# 2. The length of the input string is in the range of [1, 1000000].
# 3. The answer is guaranteed to fit in a 32-bit integer.
# 4. The given input string may contain '0' only once.
# 5. The given input string may contain '1' only once.
# 6. The given input string may contain '0' and '1' both.
# 7. The given input string may contain '0' and '1' both.
# 8. The given input string may contain '0' and '1' both.
# 9. The given input string may contain '0' and '1' both.
# 10. The given input string may contain '0' and '1' both.
# 11. The given input string may contain '0' and '1' both.
# 12. The given input string may contain '0' and '1' both.
# 13. The given input string may contain '0' and '1' both.
# 14. The given input string may contain '0' and '1' both.
# 15. The given input string may contain '0' and '1' both.
# 16. The given input string may contain '0' and '1' both.
# 17. The given input string may contain '0' and '1' both.
# 18. The given input string may contain '0' and '1' both.
# 19. The given input string may contain '0' and '1' both.
# 20. The given input string may contain '0' and '1' both.
# 21. The given input string may contain '0' and '1' both.
# 22. The given input string may contain '0' and '1' both.
# 23. The given input string may contain '0' and '1' both.
# 24. The given input string may contain '0' and '1' both.
# 25. The given input string may contain '0' and '1' both.
# 26. The given input string may contain '0' and '1' both.
# 27. The given input string may contain '0' and '1' both.
# 28. The given input string may contain '0' and '1' both.
# 29. The given input string may contain '0' and '1' both.
# 30. The given input string may contain '0' and '1' both.
# 31. The given input string may contain '0' and '1' both.
# 32. The given input string may contain '0' and '1' both.
# 33. The given input string may contain '0' and '1' both.
# 34. The given input string may contain '0' and '1' both.
# 35. The given input string may contain '0' and '1' both.
# 36. The given input string may contain '0' and '1' both.
# 37. The given input string may contain '0' and '1' both.
# 38. The given input string may contain '0' and '1' both.
# 39. The given input string may contain '0' and '1' both.
# 40. The given input string may contain '0' and '1' both.
# 41. The given input string may contain '0' and '1' both.
# 42. The given input string may contain '0' and '1' both.
# 43. The given input string may contain '0' and '1' both.
# 44. The given input string may contain '0' and '1' both.
# 45. The given input string may contain '0' and '1' both.
# 46. The given input string may contain '0' and '1' both.
# 47. The given input string may contain '0' and '1' both.
# 48. The given input string may contain '0' and '1' both.
# 49. The given input string may contain '0' and '1' both.
# 50. The given input string may contain '0' and '1' both.
# 51. The given input string may contain '0' and '1' both.
# 52. The given input string may contain '0' and '1' both.
# 53. The given input string may contain '0' and '1' both.
# 54. The given input string may contain '0' and '1' both.
# 55. The given input string may contain '0' and '1' both.
# 56. The given input string may contain '0' and '1' both.
# 57. The given input string may contain '0' and '1' both.
# 58. The given input string may contain '0' and '1' both.
# 59. The given input string may contain '0' and '1' both.
# 60. The given input string may contain '0' and '1' both.
# 61. The given input string may contain '0' and '1' both.
# 62. The given input string may contain '0' and '1' both.
# 63. The given input string may contain '0' and '1' both.
# 64. The given input string may contain '0' and '1' both.
# 65. The given input string may contain '0' and '1' both.
# 66. The given input string may contain '0' and '1' both.
# 67. The given input string may contain '0' and '1' both.
# 68. The given input string may contain '0' and '1' both.
# 69. The given input string may contain '0' and '1' both.
# 70. The given input string may contain '0' and '1' both.
# 71. The given input string may contain '0' and '1' both.
# 72. The given input string may contain '0' and '1' both.