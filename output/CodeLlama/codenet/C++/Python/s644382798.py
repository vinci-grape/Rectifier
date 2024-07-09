#include <stdio.h>
#include <string.h>
#define LEN 100005

typedef struct pp
{
    char name[100];
    int t;
} P;

P Q[LEN];
int head, tail, n;

def enqueue(x):
    Q[tail] = x
    tail = (tail + 1) % LEN

def dequeue():
    x = Q[head]
    head = (head + 1) % LEN
    return x

def min(a, b):
    return a if a < b else b

def main():
    elaps = 0
    c = 0
    i = 0
    q = 0
    u = P()
    scanf("%d %d", &n, &q)

    for i in range(1, n + 1):
        scanf("%s", Q[i].name)
        scanf("%d", &Q[i].t)
    head = 1
    tail = n + 1

    while head != tail:
        u = dequeue()
        c = min(q, u.t)
        u.t -= c
        elaps += c
        if u.t > 0:
            enqueue(u)
        else:
            printf("%s %d\n", u.name, elaps)

    return 0