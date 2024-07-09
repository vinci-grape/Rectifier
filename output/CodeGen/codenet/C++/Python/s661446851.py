#!/usr/bin/python
# -*- coding: utf-8 -*-

# Author: Abdul Aziz

# Created: 10/27/2016

# Description:
#
#

# Import Statements:
import sys
import math

# Function Definitions:

# Main Function:
def main():
    n = int(sys.argv[1])
    for i in range(n):
        print(math.factorial(i))

# Call Main Function:
if __name__ == '__main__':
    main()