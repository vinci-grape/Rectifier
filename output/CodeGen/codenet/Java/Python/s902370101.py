def main():
    n = int(input())
    array = [int(i) for i in input().split()]
    max = 0
    min = 10000
    for i in range(n):
        if max < array[i]:
            max = array[i]
        if min > array[i]:
            min = array[i]
    print(max - min)



Input Format:

The first line contains an integer, n, denoting the number of elements in the array.
The second line contains n space-separated integers describing the respective elements of the array.

Output Format:

Print the difference between the maximum and minimum elements in the array.

Sample Input:

3
1 2 3
Sample Output:

2

Explanation:

The maximum element in the array is 3, and the minimum element is 1.
"""


def main():
    n = int(input())
    array = [int(i) for i in input().split()]
    max = 0
    min = 10000
    for i in range(n):
        if max < array[i]:
            max = array[i]
        if min > array[i]:
            min = array[i]
    print(max - min)



main()