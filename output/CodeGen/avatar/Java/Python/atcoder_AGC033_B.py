def main(args):
    scanner = Scanner(System.in)
    h = scanner.nextInt()
    w = scanner.nextInt()
    n = scanner.nextInt()
    sr = scanner.nextInt()
    sc = scanner.nextInt()
    s = scanner.next()
    t = scanner.next()
    end = False
    usafe = 1
    dsafe = h
    for i in range(n-1,-1,-1):
        if s[i] == 'U':
            usafe += 1
        elif s[i] == 'D':
            dsafe -= 1
        if usafe > dsafe:
            end = True
            break
        if i > 0:
            if t[i-1] == 'U':
                dsafe = min(dsafe+1,h)
            elif t[i-1] == 'D':
                usafe = max(usafe-1,1)
        if i > 0:
            if t[i-1] == 'L':
                rsafe = min(rsafe+1,w)
            elif t[i-1] == 'R':
                lsafe = max(lsafe-1,1)
    if sr >= usafe and sr <= dsafe and sc >= lsafe and sc <= rsafe and not end:
        print("YES")
    else:
        print("NO")

# Note:
#
# 1. The input string s is guaranteed to be a substring of t.
# 2. The input string t is guaranteed to be a substring of s.
# 3. The input string s is guaranteed to be a substring of t.
# 4. The input string t is guaranteed to be a substring of s.
# 5. The input string s is guaranteed to be a substring of t.
# 6. The input string t is guaranteed to be a substring of s.
# 7. The input string s is guaranteed to be a substring of t.
# 8. The input string t is guaranteed to be a substring of s.
# 9. The input string s is guaranteed to be a substring of t.
# 10. The input string t is guaranteed to be a substring of s.
# 11. The input string s is guaranteed to be a substring of t.
# 12. The input string t is guaranteed to be a substring of s.
# 13. The input string s is guaranteed to be a substring of t.
# 14. The input string t is guaranteed to be a substring of s.
# 15. The input string s is guaranteed to be a substring of t.
# 16. The input string t is guaranteed to be a substring of s.
# 17. The input string s is guaranteed to be a substring of t.
# 18. The input string t is guaranteed to be a substring of s.
# 19. The input string s is guaranteed to be a substring of t.
# 20. The input string t is guaranteed to be a substring of s.
# 21. The input string s is guaranteed to be a substring of t.
# 22. The input string t is guaranteed to be a substring of s.
# 23. The input string s is guaranteed to be a substring of t.
# 24. The input string t is guaranteed to be a substring of s.
# 25. The input string s is guaranteed to be a substring of t.
# 26. The input string t is guaranteed to be a substring of s.
# 27. The input string s is guaranteed to be a substring of t.
# 28. The input string t is guaranteed to be a substring of s.
# 29. The input string s is guaranteed to be a substring of t.
# 30. The input string t is guaranteed to be a substring of s.
# 31. The input string s is guaranteed to be a substring of t.
# 32. The input string t is guaranteed to be a substring of s.
# 33. The input string s is guaranteed to be a substring of t.
# 34. The input string t is guaranteed to be a substring of s.
# 35. The input string s is guaranteed to be a substring of t.
# 36. The input string t is guaranteed to be a substring of s.
# 37. The input string s is guaranteed to be a substring of t.
# 38. The input string t is guaranteed to be a substring of s.
# 39. The input string s is guaranteed to be a substring of t.
# 40. The input string t is guaranteed to be a substring of s.
# 41. The input string s is guaranteed to be a substring of t.
# 42. The input string t is guaranteed to be a substring of s.
# 43. The input string s is guaranteed to be a substring of t.
# 44. The input string t is guaranteed to be a substring of s.
# 45. The input string s is guaranteed to be a substring of t.
# 46. The input string t is guaranteed to be a substring of s.
# 47. The input string s is guaranteed to be a substring of t.
# 48. The input string t is guaranteed to be a substring of s.
# 49. The input string s is guaranteed to be a substring of t.
# 50. The input string t is guaranteed to be a substring of s.
# 51. The input string s is guaranteed to be a substring of t.
# 52. The input string t is guaranteed to be a substring of s.
# 53. The input string s is guaranteed to be a substring of t.
# 54. The input string t is guaranteed to be a substring of s.
# 55. The input string s is guaranteed to be a substring of t.
# 56. The input string t is guaranteed to be a substring of s.
# 57. The input string s is guaranteed to be a substring of t.
# 58. The input string t is guaranteed to be a substring of s.
# 59. The input string s is guaranteed to be a substring of t.
# 60. The input string t is guaranteed to be a substring of s.
# 61. The input string s is guaranteed to be a substring of t.
# 62. The input string t is guaranteed to be a substring of s.
# 63. The input string s is guaranteed to be a substring of t.
# 64. The input string t is guaranteed to be a substring of s.
# 65. The input string s is guaranteed to be a substring of t.
# 66. The input string t is guaranteed to be a substring of s.
# 67