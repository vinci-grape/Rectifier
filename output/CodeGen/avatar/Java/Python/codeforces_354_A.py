def main(N, L, R, QL, QR):
    inp = input()
    W = [int(x) for x in inp.split()]
    sum = [0] * (N + 1)
    for n in range(N):
        sum[n + 1] = sum[n] + W[n]
    min = 2 ** 64 - 1
    for firstR in range(0, N + 1):
        lCount = firstR
        rCount = N - lCount
        cand = sum[lCount] * L + (sum[N] - sum[lCount]) * R
        llCount = max(0, lCount - rCount - 1)
        rrCount = max(0, rCount - lCount - 1)
        cand += llCount * QL
        cand += rrCount * QR
        min = min(cand, min)
    print(min)

# Note:
# 1. Python does not have a long type.
# 2. Python has a max() function that returns the maximum value in a list.
# 3. Python has a min() function that returns the minimum value in a list.
# 4. Python has a int() function that converts a string to an integer.
# 5. Python has a int() function that converts a string to an integer.
# 6. Python has a int() function that converts a string to an integer.
# 7. Python has a int() function that converts a string to an integer.
# 8. Python has a int() function that converts a string to an integer.
# 9. Python has a int() function that converts a string to an integer.
# 10. Python has a int() function that converts a string to an integer.
# 11. Python has a int() function that converts a string to an integer.
# 12. Python has a int() function that converts a string to an integer.
# 13. Python has a int() function that converts a string to an integer.
# 14. Python has a int() function that converts a string to an integer.
# 15. Python has a int() function that converts a string to an integer.
# 16. Python has a int() function that converts a string to an integer.
# 17. Python has a int() function that converts a string to an integer.
# 18. Python has a int() function that converts a string to an integer.
# 19. Python has a int() function that converts a string to an integer.
# 20. Python has a int() function that converts a string to an integer.
# 21. Python has a int() function that converts a string to an integer.
# 22. Python has a int() function that converts a string to an integer.
# 23. Python has a int() function that converts a string to an integer.
# 24. Python has a int() function that converts a string to an integer.
# 25. Python has a int() function that converts a string to an integer.
# 26. Python has a int() function that converts a string to an integer.
# 27. Python has a int() function that converts a string to an integer.
# 28. Python has a int() function that converts a string to an integer.
# 29. Python has a int() function that converts a string to an integer.
# 30. Python has a int() function that converts a string to an integer.
# 31. Python has a int() function that converts a string to an integer.
# 32. Python has a int() function that converts a string to an integer.
# 33. Python has a int() function that converts a string to an integer.
# 34. Python has a int() function that converts a string to an integer.
# 35. Python has a int() function that converts a string to an integer.
# 36. Python has a int() function that converts a string to an integer.
# 37. Python has a int() function that converts a string to an integer.
# 38. Python has a int() function that converts a string to an integer.
# 39. Python has a int() function that converts a string to an integer.
# 40. Python has a int() function that converts a string to an integer.
# 41. Python has a int() function that converts a string to an integer.
# 42. Python has a int() function that converts a string to an integer.
# 43. Python has a int() function that converts a string to an integer.
# 44. Python has a int() function that converts a string to an integer.
# 45. Python has a int() function that converts a string to an integer.
# 46. Python has a int() function that converts a string to an integer.
# 47. Python has a int() function that converts a string to an integer.
# 48. Python has a int() function that converts a string to an integer.
# 49. Python has a int() function that converts a string to an integer.
# 50. Python has a int() function that converts a string to an integer.
# 51. Python has a int() function that converts a string to an integer.
# 52. Python has a int() function that converts a string to an integer.
# 53. Python has a int() function that converts a string to an integer.
# 54. Python has a int() function that converts a string to an integer.
# 55. Python has a int() function that converts a string to an integer.
# 56. Python has a int() function that converts a string to an integer.
# 57. Python has a int() function that converts a string to an integer.
# 58. Python has a int() function that converts a string to an integer.
# 59. Python has a int() function that converts a string to an integer.
# 60. Python has a int() function that converts a string to an integer.
# 61. Python has a int() function that converts a string to an integer.
# 62. Python has a int() function that converts a string to an integer.
# 63. Python has a int() function that converts a string to an integer.
# 64. Python has a int() function that converts a string to an integer.
# 65. Python has a int() function that converts a string to an integer.
# 66. Python has a int() function that converts a string to an integer.
# 67. Python has a int() function that converts a string to an integer.
# 68. Python has a int() function that converts a string to an integer.
# 69. Python has a int() function that converts a string to an integer.
# 70. Python has a int() function that converts a string to an integer.
# 71. Python has a int() function that converts a string to an integer.
# 72. Python has a int() function that converts a string to an integer.
# 73. Python has a int() function that converts a string to an integer.
# 74. Python has a int() function that converts a string to an integer.
# 75. Python has a int() function that converts a string to an integer.
# 76. Python has a int() function that converts a string to an integer.
# 77. Python has a int() function that converts a string to an integer.
# 78. Python has a int() function that converts a string to an integer.
# 79. Python has a int() function that converts a string to an integer.
# 80. Python has a int() function that converts a string to an integer.
# 81. Python has a int() function that converts a string to an integer.
# 82. Python has a int() function that converts a string to an integer.
# 83. Python has a int() function that converts a string to an integer.
# 84. Python has a int()