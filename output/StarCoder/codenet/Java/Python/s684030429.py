# Python program For handling Input/Output 
import java.io.*; 
import java.util.*;
import java.math.*;
//import java.awt.*;

class Main 
{ 
    Scanner sc;
    int max = 0,cur = 0;
#actual logic
    def solve():
        a = ni()
        b = ni()

        print(max(0, a-2*b))

#constructor
    def __init__(self):
        try:  
            sc = Scanner(System.in);
        except(Exception e):