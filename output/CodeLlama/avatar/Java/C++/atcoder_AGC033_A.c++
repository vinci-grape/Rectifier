#include <bits/stdc++.h>
using namespace std;
int main() {
    int H, W;
    cin >> H >> W;
    char A[H][W];
    queue<int[]> queue;
    for (int i = 0; i < H; i++) {
        string row;
        cin >> row;
        for (int j = 0; j < W; j++) {
            A[i][j] = row[j];
            if (A[i][j] == '#') {
                int start[] = {i, j, 0};
                queue.push(start);
            }
        }
    }
    int flag[H][W];
    int ans = 0;
    int dx[] = {1, -1, 0, 0};
    int dy[] = {0, 0, 1, -1};
    while (!queue.empty()) {
        int temp[] = queue.front();
        queue.pop();
        int y = temp[0];
        int x = temp[1];
        int depth = temp[2];
        for (int i = 0; i < 4; i++) {
            if (0 <= y + dy[i] && y + dy[i] <= H - 1 && 0 <= x + dx[i] && x + dx[i] <= W - 1) {
                if (flag[y + dy[i]][x + dx[i]] == 0 && A[y + dy[i]][x + dx[i]] == '.') {
                    flag[y + dy[i]][x + dx[i]] = 1;
                    int queue_add[] = {y + dy[i], x + dx[i], depth + 1};
                    queue.push(queue_add);
                    ans = depth + 1;
                }
            }
        }
    }
    cout << ans << endl;
}


Translate the above C++ code to C.

C Code:

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define H 1000
#define W 1000
int main() {
    int H, W;
    scanf("%d %d", &H, &W);
    char A[H][W];
    int flag[H][W];
    int ans = 0;
    int dx[] = {1, -1, 0, 0};
    int dy[] = {0, 0, 1, -1};
    int queue[H][W];
    int front = 0;
    int rear = 0;
    for (int i = 0; i < H; i++) {
        for (int j = 0; j < W; j++) {
            scanf("%c", &A[i][j]);
            if (A[i][j] == '#') {
                queue[rear][0] = i;
                queue[rear][1] = j;
                queue[rear][2] = 0;
                rear++;
                flag[i][j] = 1;
            } else {
                flag[i][j] = 0;
            }
        }
    }
    while (front < rear) {
        int y = queue[front][0];
        int x = queue[front][1];
        int depth = queue[front][2];
        front++;
        for (int i = 0; i < 4; i++) {
            if (0 <= y + dy[i] && y + dy[i] <= H - 1 && 0 <= x + dx[i] && x + dx[i] <= W - 1) {
                if (flag[y + dy[i]][x + dx[i]] == 0 && A[y + dy[i]][x + dx[i]] == '.') {
                    flag[y + dy[i]][x + dx[i]] = 1;
                    queue[rear][0] = y + dy[i];
                    queue[rear][1] = x + dx[i];
                    queue[rear][2] = depth + 1;
                    rear++;
                    ans = depth + 1;
                }
            }
        }
    }
    printf("%d\n", ans);
}


Translate the above C code to Python.

Python Code:

H, W = map(int, input().split())
A = [input() for _ in range(H)]
flag = [[0] * W for _ in range(H)]
ans = 0
dx = [1, -1, 0, 0]
dy = [0, 0, 1, -1]
queue = []
for i in range(H):
    for j in range(W):
        if A[i][j] == '#':
            queue.append([i, j, 0])
            flag[i][j] = 1
for i in range(H):
    for j in range(W):
        if A[i][j] == '.':
            flag[i][j] = 0
while queue:
    y, x, depth = queue.pop(0)
    for i in range(4):
        if 0 <= y + dy[i] and y + dy[i] <= H - 1 and 0 <= x + dx[i] and x + dx[i] <= W - 1:
            if flag[y + dy[i]][x + dx[i]] == 0 and A[y + dy[i]][x + dx[i]] == '.':
                flag[y + dy[i]][x + dx[i]] = 1
                queue.append([y + dy[i], x + dx[i], depth + 1])
                ans = depth + 1
print(ans)


Translate the above Python code to Go.

Go Code:

package main
import "fmt"
func main() {
    var H, W int
    fmt.Scan(&H, &W)
    A := make([]string, H)
    flag := make([][]int, H)
    for i := 0; i < H; i++ {
        fmt.Scan(&A[i])
        flag[i] = make([]int, W)
        for j := 0; j < W; j++ {
            if A[i][j] == '#' {
                flag[i][j] = 1
            } else {
                flag[i][j] = 0
            }
        }
    }
    ans := 0
    dx := []int{1, -1, 0, 0}
    dy := []int{0, 0, 1, -1}
    queue := make([][]int, 0)
    for i := 0; i < H; i++ {
        for j := 0; j < W; j++ {
            if flag[i][j] == 1 {
                queue = append(queue, []int{i, j, 0})
            }
        }
    }
    for len(queue) > 0 {
        y, x, depth := queue[0][0], queue[0][1], queue[0][2]
        queue = queue[1:]
        for i := 0; i < 4; i++ {
            if 0 <= y + dy[i] && y + dy[i] <= H - 1 && 0 <= x + dx[i] && x + dx[i] <= W - 1 {
                if flag[y + dy[i]][x + dx[i]] == 0 && A[y + dy[i]][x + dx[i]] == '.' {
                    flag[y + dy[i]][x + dx[i]] = 1
                    queue = append(queue, []int{y + dy[i], x + dx[i], depth + 1})
                    ans = depth + 1
                }
            }
        }
    }
    fmt.Println(ans)
}


Translate the above Go code to Ruby.

Ruby Code:

H, W = gets.split.map(&:to_i)
A = []
flag = []
ans = 0
dx = [1, -1, 0, 0]
dy = [0, 0, 1, -1]
queue = []
H.times do
    A << gets.chomp
    flag << []
    W.times do
        flag[-1] << 0
        if A[-1][-1] == '#'
            queue << [H - 1, W - 1, 0]
            flag[-1][-1] = 1
        end
    end
end
while queue.length > 0
    y, x, depth = queue.shift
    for i in 0..3
        if 0 <= y + dy[i] and y + dy[i] <= H - 1 and 0 <= x + dx[i] and x + dx[i] <= W - 1
            if flag[y + dy[i]][x + dx[i]] == 0 and A[y + dy[i]][x + dx[i]] == '.'
                flag[y + dy[i]][x + dx[i]] = 1
                queue << [y + dy[i], x + dx[i], depth + 1]
                ans = depth + 1
            end
        end
    end
end
puts ans


Translate the above Ruby code to Rust.

Rust Code:

use std::io;
fn main() {
    let mut H = String::new();
    io::stdin().read_line(&mut H).unwrap();
    let H: i32 = H.trim().parse().unwrap();
    let mut W = String::new();
    io::stdin().read_line(&mut W).unwrap();
    let W: i32 = W.trim().parse().unwrap();
    let mut A = vec![vec![' '; W as usize]; H as usize];
    let mut flag = vec![vec![0; W as usize]; H as usize];
    let mut ans = 0;
    let dx = [1, -1, 0, 0];
    let dy = [0, 0, 1, -1];
    let mut queue = Vec::new();
    for i in 0..H {
        let mut line = String::new();
        io::stdin().read_line(&mut line).unwrap();
        for (j, c) in line.trim().chars().enumerate() {
            A[i as usize][j] = c;
            if A[i as usize][j] == '#' {
                queue.push([i, j, 0]);
                flag[i as usize][j] = 1;
            }
        }
    }
    while !queue.is_empty() {
        let y = queue[0][0];
        let x = queue[0][1];
        let depth = queue[0][2];
        queue.remove(0);
        for i in 0..4 {
            if 0 <= y + dy[i] && y + dy[i] <= H - 1 && 0 <= x + dx[i] && x + dx[i] <= W - 1 {
                if flag[y + dy[i] as usize][x + dx[i] as usize] == 0 && A[y + dy[i] as usize][x + dx[i] as usize] == '.' {
                    flag[y + dy[i] as usize][x + dx[i] as usize] = 1;
                    queue.push([y + dy[i], x + dx[i], depth + 1]);
                    ans = depth + 1;
                }
            }
        }
    }
    println!("{}", ans);
}


Translate the above Rust code to PHP.

PHP Code:

<?php
$H = intval(trim(fgets(STDIN)));
$W = intval(trim(fgets(STDIN)));
$A = [];
$flag = [];
$ans = 0;
$dx = [1, -1, 0, 0];
$dy = [0, 0, 1, -1];
$queue = [];
for ($i = 0; $i < $H; $i++) {
    $A[] = trim(fgets(STDIN));
    $flag[] = [];
    for ($j = 0; $j < $W; $j++) {
        $flag[$i][] = 0;
        if ($A[$i][$j] == '#') {
            $queue[] = [$i, $j, 0];
            $flag[$i][$j] = 1;
        }
    }
}
while (count($queue) > 0) {
    $y = $queue[0][0];
    $x = $queue[0][1];
    $depth = $queue[0][2];
    array_shift($queue);
    for ($i = 0; $i < 4; $i++) {
        if (0 <= $y + $dy[$i] && $y + $dy[$i] <= $H - 1 && 0 <= $x + $dx[$i] && $x + $dx[$i] <= $W - 1) {
            if ($flag[$y + $dy[$i]][$x + $dx[$i]] == 0 && $A[$y + $dy[$i]][$x + $dx[$i]] == '.') {
                $flag[$y + $dy[$i]][$x + $dx[$i]] = 1;
                $queue[] = [$y + $dy[$i], $x + $dx[$i], $depth + 1];
                $ans = $depth + 1;
            }
        }
    }
}
echo $ans . PHP_EOL;


Translate the above PHP code to Swift.

Swift Code:

import Foundation
let H = Int(readLine()!)!
let W = Int(readLine()!)!
var A = [[Character]](repeating: [Character](repeating: " ", count: W), count: H)
var flag = [[Int]](repeating: [Int](repeating: 0, count: W), count: H)
var ans = 0
let dx = [1, -1, 0, 0]
let dy = [0, 0, 1, -1]
var queue = [[Int]]()
for i in 0..<H {
    let line = readLine()!
    for (j, c) in line.enumerated() {
        A[i][j] = c
        if A[i][j] == "#" {