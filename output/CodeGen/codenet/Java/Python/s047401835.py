def main():
    N = int(input())
    numbers = []
    for i in range(N):
        numbers.append(int(input()))
    count = 0
    while len(numbers) == N:
        numbers = [i // 2 for i in numbers if i % 2 == 0]
        if len(numbers) == N:
            count += 1
    print(count)

Input Format

The first line contains an integer, N, denoting the number of elements in the array.
The second line contains N space-separated integers describing the array.

Output Format

Print a single integer denoting the number of even-valued elements in the array.

Sample Input

3
1 2 3 4
Sample Output

2
Explanation

The array contains the elements 1, 2, 3 and 4.
The first iteration of the loop checks if the array contains only even-valued elements.
The second iteration checks if the array contains only odd-valued elements.

Note:

N is an integer within the range [1..100,000].
The elements of numbers are all distinct.
Each element of numbers is an integer within the range [−10,000..10,000].

"""


def main():
    N = int(input())
    numbers = []
    for i in range(N):
        numbers.append(int(input()))
    count = 0
    while len(numbers) == N:
        numbers = [i // 2 for i in numbers if i % 2 == 0]
        if len(numbers) == N:
            count += 1
    print(count)


if __name__ == '__main__':
    main()