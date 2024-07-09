import sys
 
a, b = map(int, sys.stdin.readline().split())
 
ju = [False] * 100001
pe = [0] * 100001
wa = 0
ac = 0
 
for i in range(b):
    n, res = map(int, sys.stdin.readline().split())
 
    if res == 0 and not ju[n-1]:
        pe[n-1] += 1
 
    if res == 1:
        ju[n-1] = True
 
for i in range(a):
    if ju[i]:
        ac += 1
        wa += pe[i]
 
print(ac, wa)


Translate the above Python code to C++.

C++ Code:

#include <iostream>
 
using namespace std;
 
int main() {
    int a, b;
    cin >> a >> b;
    bool ju[100001] = {false};
    int pe[100001] = {0};
    int wa = 0;
    int ac = 0;
 
    for (int i = 0; i < b; i++) {
        int n, res;
        cin >> n >> res;
 
        if (res == 0 && !ju[n-1]) {
            pe[n-1]++;
        }
 
        if (res == 1) {
            ju[n-1] = true;
        }
    }
 
    for (int i = 0; i < a; i++) {
        if (ju[i]) {
            ac++;
            wa += pe[i];
        }
    }
 
    cout << ac << " " << wa << endl;
}


Translate the above C++ code to C.

C Code:

#include <stdio.h>
 
int main() {
    int a, b;
    scanf("%d %d", &a, &b);
    bool ju[100001] = {false};
    int pe[100001] = {0};
    int wa = 0;
    int ac = 0;
 
    for (int i = 0; i < b; i++) {
        int n, res;
        scanf("%d %d", &n, &res);
 
        if (res == 0 && !ju[n-1]) {
            pe[n-1]++;
        }
 
        if (res == 1) {
            ju[n-1] = true;
        }
    }
 
    for (int i = 0; i < a; i++) {
        if (ju[i]) {
            ac++;
            wa += pe[i];
        }
    }
 
    printf("%d %d\n", ac, wa);
}


Translate the above C code to Go.

Go Code:

package main
 
import "fmt"
 
func main() {
    var a, b int
    fmt.Scan(&a, &b)
    ju := make([]bool, 100001)
    pe := make([]int, 100001)
    wa := 0
    ac := 0
 
    for i := 0; i < b; i++ {
        var n, res int
        fmt.Scan(&n, &res)
 
        if res == 0 && !ju[n-1] {
            pe[n-1]++
        }
 
        if res == 1 {
            ju[n-1] = true
        }
    }
 
    for i := 0; i < a; i++ {
        if ju[i] {
            ac++
            wa += pe[i]
        }
    }
 
    fmt.Println(ac, wa)
}


Translate the above Go code to JavaScript.

JavaScript Code:

process.stdin.resume();
process.stdin.setEncoding('ascii');
 
var input_stdin = "";
var input_stdin_array = "";
var input_currentline = 0;
 
process.stdin.on('data', function (data) {
    input_stdin += data;
});
 
process.stdin.on('end', function () {
    input_stdin_array = input_stdin.split("\n");
    main();    
});
 
function readLine() {
    return input_stdin_array[input_currentline++];
}
 
/////////////// ignore above this line ////////////////////
 
function main() {
    var a = parseInt(readLine());
    var b = parseInt(readLine());
    var ju = new Array(100001).fill(false);
    var pe = new Array(100001).fill(0);
    var wa = 0;
    var ac = 0;
 
    for(var i = 0; i < b; i++) {
        var n = parseInt(readLine());
        var res = parseInt(readLine());
 
        if(res == 0 && !ju[n-1]) {
            pe[n-1]++;
        }
 
        if(res == 1) {
            ju[n-1] = true;
        }
    }
 
    for(var i = 0; i < a; i++) {
        if(ju[i]) {
            ac++;
            wa += pe[i];
        }
    }
 
    console.log(ac + " " + wa);
}


Translate the above JavaScript code to PHP.

PHP Code:

<?php
 
$handle = fopen ("php://stdin","r");
fscanf($handle,"%d",$a);
fscanf($handle,"%d",$b);
$ju = array_fill(0,100001,false);
$pe = array_fill(0,100001,0);
$wa = 0;
$ac = 0;
 
for($i = 0; $i < $b; $i++){
    fscanf($handle,"%d",$n);
    fscanf($handle,"%d",$res);
 
    if($res == 0 && !$ju[$n-1]){
        $pe[$n-1]++;
    }
 
    if($res == 1){
        $ju[$n-1] = true;
    }
}
 
for($i = 0; $i < $a; $i++){
    if($ju[$i]){
        $ac++;
        $wa += $pe[$i];
    }
}
 
echo $ac." ".$wa;


Translate the above PHP code to Ruby.

Ruby Code:

a, b = gets.split.map(&:to_i)
 
ju = Array.new(100001, false)
pe = Array.new(100001, 0)
wa = 0
ac = 0
 
for i in 0..(b-1)
    n, res = gets.split.map(&:to_i)
 
    if res == 0 && !ju[n-1]
        pe[n-1] += 1
    end
 
    if res == 1
        ju[n-1] = true
    end
end
 
for i in 0..(a-1)
    if ju[i]
        ac += 1
        wa += pe[i]
    end
end
 
puts ac.to_s + " " + wa.to_s


Translate the above Ruby code to C#.

C# Code:

using System;
 
class Solution
{
    static void Main(String[] args)
    {
        int a = Convert.ToInt32(Console.ReadLine());
        int b = Convert.ToInt32(Console.ReadLine());
        bool[] ju = new bool[100001];
        int[] pe = new int[100001];
        int wa = 0;
        int ac = 0;
 
        for(int i = 0; i < b; i++){
            string[] inputs = Console.ReadLine().Split();
            int n = Convert.ToInt32(inputs[0]);
            int res = Convert.ToInt32(inputs[1]);
 
            if(res == 0 && !ju[n-1]){
                pe[n-1]++;
            }
 
            if(res == 1){
                ju[n-1] = true;
            }
        }
 
        for(int i = 0; i < a; i++){
            if(ju[i]){
                ac++;
                wa += pe[i];
            }
        }
 
        Console.WriteLine(ac + " " + wa);
    }
}


Translate the above C# code to Swift.

Swift Code:

import Foundation
 
let a = Int(readLine()!)!
let b = Int(readLine()!)!
var ju = Array(repeating: false, count: 100001)
var pe = Array(repeating: 0, count: 100001)
var wa = 0
var ac = 0
 
for _ in 0..<b {
    let inputs = readLine()!.split(separator: " ").map{Int(String($0))!}
    let n = inputs[0]
    let res = inputs[1]
 
    if res == 0 && !ju[n-1] {
        pe[n-1] += 1
    }
 
    if res == 1 {
        ju[n-1] = true
    }
}
 
for i in 0..<a {
    if ju[i] {
        ac += 1
        wa += pe[i]
    }
}
 
print(ac, wa)


Translate the above Swift code to R.

R Code:

a <- as.integer(readline())
b <- as.integer(readline())
ju <- rep(FALSE, 100001)
pe <- rep(0, 100001)
wa <- 0
ac <- 0
 
for(i in 1:b){
    n <- as.integer(readline())
    res <- as.integer(readline())
 
    if(res == 0 && !ju[n]){
        pe[n] <- pe[n] + 1
    }
 
    if(res == 1){
        ju[n] <- TRUE
    }
}
 
for(i in 1:a){
    if(ju[i]){
        ac <- ac + 1
        wa <- wa + pe[i]
    }
}
 
cat(ac, " ", wa, "\n")


Translate the above R code to Kotlin.

Kotlin Code:

fun main(args: Array<String>) {
    val a = readLine()!!.toInt()
    val b = readLine()!!.toInt()
    val ju = BooleanArray(100001)
    val pe = IntArray(100001)
    var wa = 0
    var ac = 0
 
    for(i in 0 until b){
        val inputs = readLine()!!.split(" ").map{it.toInt()}
        val n = inputs[0]
        val res = inputs[1]
 
        if(res == 0 && !ju[n-1]){
            pe[n-1]++
        }
 
        if(res == 1){
            ju[n-1] = true
        }
    }
 
    for(i in 0 until a){
        if(ju[i]){
            ac++
            wa += pe[i]
        }
    }
 
    println("$ac $wa")
}


Translate the above Kotlin code to Scala.

Scala Code:

object Solution {
    def main(args: Array[String]) {
        val a = readLine().toInt
        val b = readLine().toInt
        val ju = Array.fill(100001)(false)
        val pe = Array.fill(100001)(0)
        var wa = 0
        var ac = 0
 
        for(i <- 0 until b){
            val inputs = readLine().split(" ").map(_.toInt)
            val n = inputs(0)
            val res = inputs(1)
 
            if(res == 0 && !ju(n-1)){
                pe(n-1) += 1
            }
 
            if(res == 1){
                ju(n-1) = true
            }
        }
 
        for(i <- 0 until a){
            if(ju(i)){
                ac += 1
                wa += pe(i)
            }
        }
 
        println(ac + " " + wa)
    }
}


Translate the above Scala code to Perl.

Perl Code:

use strict;
use warnings;
 
my $a = <STDIN>;
chomp($a);
my $b = <STDIN>;
chomp($b);
my @ju = (0) x 100001;
my @pe = (0) x 100001;
my $wa = 0;
my $ac = 0;
 
for(my $i = 0; $i < $b; $i++){
    my $n = <STDIN>;
    chomp($n);
    my $res = <STDIN>;
    chomp($res);
 
    if($res == 0 && !$ju[$n-1]){
        $pe[$n-1]++;
    }
 
    if($res == 1){
        $ju[$n-1] = 1;
    }
}
 
for(my $i = 0; $i < $a; $i++){
    if($ju[$i]){
        $ac++;
        $wa += $pe[$i];
    }
}
 
print "$ac $wa\n";


Translate the above Perl code to Bash.

Bash Code:

read a
read b
 
declare -a ju=()
declare -a pe=()
wa=0
ac=0
 
for ((i=0; i<$b; i++)); do
    read n
    read res
 
    if [ $res -eq 0 ] && [ ${ju[$n-1]} -eq 0 ]; then
        pe[$n-1]=$((pe[$n-1]+1))
    fi
 
    if [ $res -eq 1 ]; then
        ju[$n-1]=1
    fi
done
 
for ((i=0; i<$a; i++)); do
    if [ ${ju[$i]} -eq 1 ]; then
        ac=$((ac+1))
        wa=$((wa+${pe[$i]}))
    fi
done
 
echo $ac $wa


Translate the above Bash code to Dart.

Dart Code:

import 'dart:io';
 
void main() {
    var a = int.parse(stdin.readLineSync());
    var b = int