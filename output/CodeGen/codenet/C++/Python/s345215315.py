#!/usr/bin/python

import sys

def gcd(a, b):
    while b:
        a, b = b, a % b
    return a

def lcm(a, b):
    return a * b / gcd(a, b)

def dfs(x, y, cnt):
    if cnt > 20:
        return
    if x == 19:
        print cnt
        return
    for i in range(8):
        nx = x + dx[i]
        ny = y + dy[i]
        if nx < 0 or nx >= 19 or ny < 0 or ny >= 15:
            continue
        if s[nx][ny]!= 'X':
            continue
        s[nx][ny] = '.'
        dfs(nx, ny, cnt + 1)
        s[nx][ny] = 'X'

def main():
    h, w = map(int, raw_input().split())
    s = []
    for i in range(h):
        s.append(raw_input().strip())
    sx, sy = map(int, raw_input().split())
    for i in range(h):
        for j in range(w):
            if s[i][j] == 'O':
                s[i][j] = '.'
    dfs(sx, sy, 0)

if __name__ == '__main__':
    main()