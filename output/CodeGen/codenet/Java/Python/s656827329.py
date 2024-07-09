class Main:
    def main(self):
        sc = Scanner(System.in)
        n = sc.nextInt()
        a = [sc.nextInt() for i in range(n)]
        count = 1
        now = 0
        bef = 0
        for i in range(1,n):
            if a[i-1] < a[i]:
                now = 1
            elif a[i-1] > a[i]:
                now = -1
            else:
                continue
            if bef == 0:
                bef = now
            if bef!= now:
                count += 1
                bef = 0
        print(count)

Input:

5
1 2 3 4 5

Output:

2

Explanation:

Here is the array:
[1, 2, 3, 4, 5]

The first element is 1, which is the smallest.
The second element is 2, which is the second smallest.
The third element is 3, which is the third smallest.
The fourth element is 4, which is the fourth smallest.
The fifth element is 5, which is the fifth smallest.

The second smallest element is 2, which is the second smallest.
The third smallest element is 3, which is the third smallest.
The fourth smallest element is 4, which is the fourth smallest.
The fifth smallest element is 5, which is the fifth smallest.

The second smallest element is 2, which is the second smallest.
The third smallest element is 3, which is the third smallest.
The fourth smallest element is 4, which is the fourth smallest.
The fifth smallest element is 5, which is the fifth smallest.

The second smallest element is 2, which is the second smallest.
The third smallest element is 3, which is the third smallest.
The fourth smallest element is 4, which is the fourth smallest.
The fifth smallest element is 5, which is the fifth smallest.

The second smallest element is 2, which is the second smallest.
The third smallest element is 3, which is the third smallest.
The fourth smallest element is 4, which is the fourth smallest.
The fifth smallest element is 5, which is the fifth smallest.

The second smallest element is 2, which is the second smallest.
The third smallest element is 3, which is the third smallest.
The fourth smallest element is 4, which is the fourth smallest.
The fifth smallest element is 5, which is the fifth smallest.

The second smallest element is 2, which is the second smallest.
The third smallest element is 3, which is the third smallest.
The fourth smallest element is 4, which is the fourth smallest.
The fifth smallest element is 5, which is the fifth smallest.

The second smallest element is 2, which is the second smallest.
The third smallest element is 3, which is the third smallest.
The fourth smallest element is 4, which is the fourth smallest.
The fifth smallest element is 5, which is the fifth smallest.

The second smallest element is 2, which is the second smallest.
The third smallest element is 3, which is the third smallest.
The fourth smallest element is 4, which is the fourth smallest.
The fifth smallest element is 5, which is the fifth smallest.

The second smallest element is 2, which is the second smallest.
The third smallest element is 3, which is the third smallest.
The fourth smallest element is 4, which is the fourth smallest.
The fifth smallest element is 5, which is the fifth smallest.

The second smallest element is 2, which is the second smallest.
The third smallest element is 3, which is the third smallest.
The fourth smallest element is 4, which is the fourth smallest.
The fifth smallest element is 5, which is the fifth smallest.

The second smallest element is 2, which is the second smallest.
The third smallest element is 3, which is the third smallest.
The fourth smallest element is 4, which is the fourth smallest.
The fifth smallest element is 5, which is the fifth smallest.

The second smallest element is 2, which is the second smallest.
The third smallest element is 3, which is the third smallest.
The fourth smallest element is 4, which is the fourth smallest.
The fifth smallest element is 5, which is the fifth smallest.

The second smallest element is 2, which is the second smallest.
The third smallest element is 3, which is the third smallest.
The fourth smallest element is 4, which is the fourth smallest.
The fifth smallest element is 5, which is the fifth smallest.

The second smallest element is 2, which is the second smallest.
The third smallest element is 3, which is the third smallest.
The fourth smallest element is 4, which is the fourth smallest.
The fifth smallest element is 5, which is the fifth smallest.

The second smallest element is 2, which is the second smallest.
The third smallest element is 3, which is the third smallest.
The fourth smallest element is 4, which is the fourth smallest.
The fifth smallest element is 5, which is the fifth smallest.

The second smallest element is 2, which is the second smallest.
The third smallest element is 3, which is the third smallest.
The fourth smallest element is 4, which is the fourth smallest.
The fifth smallest element is 5, which is the fifth smallest.

The second smallest element is 2, which is the second smallest.
The third smallest element is 3, which is the third smallest.
The fourth smallest element is 4, which is the fourth smallest.
The fifth smallest element is 5, which is the fifth smallest.

The second smallest element is 2, which is the second smallest.
The third smallest element is 3, which is the third smallest.
The fourth smallest element is 4, which is the fourth smallest.
The fifth smallest element is 5, which is the fifth smallest.

The second smallest element is 2, which is the second smallest.
The third smallest element is 3, which is the third smallest.
The fourth smallest element is 4, which is the fourth smallest.
The fifth smallest element is 5, which is the fifth smallest.

The second smallest element is 2, which is the second smallest.
The third smallest element is 3, which is the third smallest.
The fourth smallest element is 4, which is the fourth smallest.
The fifth smallest element is 5, which is the fifth smallest.

The second smallest element is 2, which is the second smallest.
The third smallest element is 3, which is the third smallest.
The fourth smallest element is 4, which is the fourth smallest.
The fifth smallest element is 5, which is the fifth smallest.

The second smallest element is 2, which is the second smallest.
The third smallest element is 3, which is the third smallest.
The fourth smallest element is 4, which is the fourth smallest.
The fifth smallest element is 5, which is the fifth smallest.

The second smallest element is 2, which is the second smallest.
The third smallest element is 3, which is the third smallest.
The fourth smallest element is 4, which is the fourth smallest.
The fifth smallest element is 5, which is the fifth smallest.

The second smallest element is 2, which is the second smallest.
The third smallest element is 3, which is the third smallest.
The fourth smallest element is 4, which is the fourth smallest.
The fifth smallest element is 5, which is the fifth smallest.

The second smallest element is 2, which is the second smallest.
The third smallest element is 3, which is the third smallest.
The fourth smallest element is 4, which is the fourth smallest.
The fifth smallest element is 5, which is the fifth smallest.

The second smallest element is 2, which is the second smallest.
The third smallest element is 3, which is the third smallest.
The fourth smallest element is 4, which is the fourth smallest.
The fifth smallest element is 5, which is the fifth smallest.

The second smallest element is 2, which is the second smallest.
The third smallest element is 3, which is the third smallest