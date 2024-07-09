import java.util.HashSet
import java.util.Scanner
import java.util.Set
import java.util.stream.IntStream

n = int(input())
set = Set()
for i in range(0, n):
    set.add(int(input()))
print(set.size())