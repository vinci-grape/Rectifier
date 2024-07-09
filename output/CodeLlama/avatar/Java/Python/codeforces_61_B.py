import re
import sys

word1, word2, word3 = sys.stdin.readline().strip().lower().split()
word1 = re.sub('[^a-zA-Z]', '', word1)
word2 = re.sub('[^a-zA-Z]', '', word2)
word3 = re.sub('[^a-zA-Z]', '', word3)

students = int(sys.stdin.readline().strip())

for i in range(students):
    testCase = sys.stdin.readline().strip().lower()
    testCase = re.sub('[^a-zA-Z]', '', testCase)
    if testCase == word1 + word2 + word3 or testCase == word1 + word3 + word2 or testCase == word2 + word1 + word3 or testCase == word2 + word3 + word1 or testCase == word3 + word2 + word1 or testCase == word3 + word1 + word2:
        print('ACC')
    else:
        print('WA')