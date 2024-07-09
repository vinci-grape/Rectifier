#!/usr/bin/python

# Import modules
import sys
import re

# Global variables
here = []
dp1 = []
dp2 = []

# Function definitions
def here(i):
    if i in here:
        return 1
    else:
        return 0

def dp1(i):
    if i in dp1:
        return dp1[i]
    else:
        if i == 0:
            dp1[i] = 1
        else:
            dp1[i] = dp1[i-1] + 1
        return dp1[i]

def dp2(i):
    if i in dp2:
        return dp2[i]
    else:
        if i == 0:
            dp2[i] = 1
        else:
            dp2[i] = dp1[i-1] + 1
        return dp2[i]

# Main function
def main():
    # Get input
    n = int(raw_input())
    m = int(raw_input())
    
    # Initialize variables
    here = []
    dp1 = []
    dp2 = []
    
    # Process input
    for i in range(m):
        a = int(raw_input())
        if a == 0:
            dpflg = True
        else:
            here.append(a)
    
    # Process input
    maxi1 = 0
    maxi2 = 0
    
    for i in range(n+1):
        if here[i] == 1:
            dp1.append(dp1[i-1] + 1)
        maxi1 = max(dp1[i], maxi1)
    
    for i in range(n+1):
        if not here[i]:
            dp2.append(dp2[i-1] + 1)
        else:
            dp2.append(dp1[i-1] + 1)
        maxi2 = max(dp2[i], maxi2)
    
    # Print output
    if not dpflg:
        print maxi1
    else:
        print maxi2

# Call main function
if __name__ == '__main__':
    main()