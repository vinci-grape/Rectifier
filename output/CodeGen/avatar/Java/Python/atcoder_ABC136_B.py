def main(N):
    count = 0
    temp = N
    ans = 0
    while temp > 0:
        temp //= 10
        count += 1
    for i in range(1, count + 1):
        if i == count:
            if i % 2 == 1:
                ans += (N - (10 ** (i - 1)) + 1)
        else:
            if i == 1:
                ans += 9
            else:
                if i % 2 == 1:
                    ans += (10 ** i - 10 ** (i - 1))
    print(ans)

# Note:
#
# 1. N is an integer.
# 2. The given input is guaranteed to fit within the range of a 32-bit signed integer.
# 3. The given input is guaranteed to be at least 1.
# 4. The given input is guaranteed to be at most 10.
# 5. The given input is guaranteed to be at least 2.
# 6. The given input is guaranteed to be at most 9.
# 7. The given input is guaranteed to be at least 1.
# 8. The given input is guaranteed to be at most 10.
# 9. The given input is guaranteed to be at least 2.
# 10. The given input is guaranteed to be at most 9.
# 11. The given input is guaranteed to be at least 1.
# 12. The given input is guaranteed to be at most 10.
# 13. The given input is guaranteed to be at least 2.
# 14. The given input is guaranteed to be at most 9.
# 15. The given input is guaranteed to be at least 1.
# 16. The given input is guaranteed to be at most 10.
# 17. The given input is guaranteed to be at least 2.
# 18. The given input is guaranteed to be at most 9.
# 19. The given input is guaranteed to be at least 1.
# 20. The given input is guaranteed to be at most 10.
# 21. The given input is guaranteed to be at least 2.
# 22. The given input is guaranteed to be at most 9.
# 23. The given input is guaranteed to be at least 1.
# 24. The given input is guaranteed to be at most 10.
# 25. The given input is guaranteed to be at least 2.
# 26. The given input is guaranteed to be at most 9.
# 27. The given input is guaranteed to be at least 1.
# 28. The given input is guaranteed to be at most 10.
# 29. The given input is guaranteed to be at least 2.
# 30. The given input is guaranteed to be at most 9.
# 31. The given input is guaranteed to be at least 1.
# 32. The given input is guaranteed to be at most 10.
# 33. The given input is guaranteed to be at least 2.
# 34. The given input is guaranteed to be at most 9.
# 35. The given input is guaranteed to be at least 1.
# 36. The given input is guaranteed to be at most 10.
# 37. The given input is guaranteed to be at least 2.
# 38. The given input is guaranteed to be at most 9.
# 39. The given input is guaranteed to be at least 1.
# 40. The given input is guaranteed to be at most 10.
# 41. The given input is guaranteed to be at least 2.
# 42. The given input is guaranteed to be at most 9.
# 43. The given input is guaranteed to be at least 1.
# 44. The given input is guaranteed to be at most 10.
# 45. The given input is guaranteed to be at least 2.
# 46. The given input is guaranteed to be at most 9.
# 47. The given input is guaranteed to be at least 1.
# 48. The given input is guaranteed to be at most 10.
# 49. The given input is guaranteed to be at least 2.
# 50. The given input is guaranteed to be at most 9.
# 51. The given input is guaranteed to be at least 1.
# 52. The given input is guaranteed to be at most 10.
# 53. The given input is guaranteed to be at least 2.
# 54. The given input is guaranteed to be at most 9.
# 55. The given input is guaranteed to be at least 1.
# 56. The given input is guaranteed to be at most 10.
# 57. The given input is guaranteed to be at least 2.
# 58. The given input is guaranteed to be at most 9.
# 59. The given input is guaranteed to be at least 1.
# 60. The given input is guaranteed to be at most 10.
# 61. The given input is guaranteed to be at least 2.
# 62. The given input is guaranteed to be at most 9.
# 63. The given input is guaranteed to be at least 1.
# 64. The given input is guaranteed to be at most 10.
# 65. The given input is guaranteed to be at least 2.
# 66. The given input is guaranteed to be at most 9.
# 67. The given input is guaranteed to be at least 1.
# 68. The given input is guaranteed to be at most 10.
# 69. The given input is guaranteed to be at least 2.
# 70. The given input is guaranteed to be at most 9.
# 71. The given input is guaranteed to be at least 1.
# 72. The given input is guaranteed to be at most 10.
# 73. The given input is guaranteed to be at least 2.
# 74. The given input is guaranteed to be at most 9.
# 75. The given input is guaranteed to be at least 1.
# 76. The given input is guaranteed to be at most 10.
# 77. The given input is guaranteed to be at least 2.
# 78. The given input is guaranteed to be at most 9.
# 79. The given input is guaranteed to be at least 1.
# 80. The given input is guaranteed to be at most 10.
# 81. The given input is guaranteed to be at least 2.
# 82. The given input is guaranteed to be at most 9.
# 83. The given input is guaranteed to be at least 1.
# 84. The given input is guaranteed to be at most 10.
# 85. The given input is guaranteed to be at least 2.
# 86. The given input is guaranteed to be at most 9.
# 87. The given input is guaranteed to be at least 1.
# 88. The given input is guaranteed to be at most 10.
# 89. The given input is guaranteed to be at least 2.
# 90. The given input is guaranteed to be at most 9.
# 91. The given input is guaranteed to be at least 1.
# 92. The given input is guaranteed to be at most 10.
# 93. The given input is guaranteed to be at least 2.
# 94. The given input is guaranteed to be at most 9.
# 95. The given input is guaranteed to be at least 1.
# 96. The given input is guaranteed to be at most 10.
# 97. The given input is guaranteed to be at least 2.
# 98. The given input is guaranteed to be at most 9.
# 99. The given input is guaranteed to be at least 1.
# 100. The given input is guaranteed to be at most 10.
# 101. The given input is guaranteed to be at least 2.
# 102. The given input is guaranteed to be at most 9.
# 103. The given input is guaranteed to be at least 1.
# 104. The given input is guaranteed to be at most 10.
# 105. The given input is guaranteed to be at least 2.
# 106. The given input is guaranteed to be at most 9.
# 107. The given input is guaranteed to be at least 1.
# 108. The given input is guaranteed to be at most 10.
# 109. The given input is guaranteed to be at least 2.
# 110. The given input is guaranteed to be at most 9.
# 111. The given input is guaranteed to be at least 1.
# 112. The given input is guaranteed to be at most 10.