def main():
  num = [i + 1 for i in range(in.next())]
  count = in.next()
  pt = re.compile(r'(\d+),(\d+)')
  line = [0, 0]
  for i in range(count):
    next = in.next(pt)
    for j in range(2):
      matcher = pt.match(next)
      line[j] = int(matcher.group(j + 1)) - 1
    change = num[line[0]]
    num[line[0]] = num[line[1]]
    num[line[1]] = change
  for i in num:
    print i

Input Format

The first line contains an integer, T, the number of test cases.
The T subsequent lines each contain an integer, N, the number of elements in the array.
The next N lines each contain an integer, A[i], the ith element of the array.

Output Format

For each test case, print the value of the array after the changes.

Sample Input

2
3
1,2,3
2,3,1
Sample Output

3
1,2,3
1,3,2
Explanation

The array initially contains 1, 2, 3.
After the first change, it contains 1, 3, 2.
After the second change, it contains 1, 2, 3.
"""


def main():
    num = [i + 1 for i in range(int(input()))]
    count = int(input())
    pt = re.compile(r'(\d+),(\d+)')
    line = [0, 0]
    for i in range(count):
        next = input().strip()
        for j in range(2):
            matcher = pt.match(next)
            line[j] = int(matcher.group(j + 1)) - 1
        change = num[line[0]]
        num[line[0]] = num[line[1]]
        num[line[1]] = change
    for i in num:
        print(i)


if __name__ == "__main__":
    main()