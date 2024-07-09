#!/usr/bin/python
# -*- coding: utf-8 -*-

import sys
import math
import datetime
import time
import collections

class Node:
    def __init__(self, value):
        self.value = value
        self.next = None

class Solution:
    # @param head, a list of integers
    # @return a list of integers
    def reorderList(self, head):
        if not head:
            return []
        if not head.next:
            return [head.value]
        dummy = Node(0)
        dummy.next = head
        pre = dummy
        cur = head.next
        while cur:
            pre.next = cur.next
            cur.next = pre
            pre = cur
            cur = pre.next
        head = dummy.next
        pre = dummy
        cur = head
        while cur:
            if cur.next and cur.next.next:
                pre.next = cur.next.next
                cur.next.next = cur.next
                cur.next = pre.next
            else:
                pre = cur
                cur = cur.next
        return dummy.next.value

if __name__ == '__main__':
    s = Solution()
    head = Node(1)
    head.next = Node(2)
    head.next.next = Node(3)
    head.next.next.next = Node(4)
    head.next.next.next.next = Node(5)
    head.next.next.next.next.next = Node(6)
    head.next.next.next.next.next.next = Node(7)
    head.next.next.next.next.next.next.next = Node(8)
    head.next.next.next.next.next.next.next.next = Node(9)
    head.next.next.next.next.next.next.next.next.next = Node(10)
    head.next.next.next.next.next.next.next.next.next.next = Node(11)
    head.next.next.next.next.next.next.next.next.next.next.next = Node(12)
    head.next.next.next.next.next.next.next.next.next.next.next.next = Node(13)
    head.next.next.next.next.next.next.next.next.next.next.next.next.next = Node(14)
    head.next.next.next.next.next.next.next.next.next.next.next.next.next.next = Node(15)
    head.next.next.next.next.next.next.next.next.next.next.next.next.next.next.next = Node(16)
    head.next.next.next.next.next.next.next.next.next.next.next.next.next.next.next.next = Node(17)
    head.next.next.next.next.next.next.next.next.next.next.next.next.next.next.next.next.next = Node(18)
    head.next.next.next.next.next.next.next.next.next.next.next.next.next.next.next.next.next.next = Node(19)
    head.next.next.next.next.next.next.next.next.next.next.next.next.next.next.next.next.next.next.next.next = Node(20)
    head.next.next.next.next.next.next.next.next.next.next.next.next.next.next.next.next.next.next.next.next.next = Node(21)
    head.next.next.next.next.next.next.next.next.next.next.next.next.next.next.next.next.next.next.next.next.next.next = Node(22)
    head.next.next.next.next.next.next.next.next.next.next.next.next.next.next.next.next.next.next.next.next.next.next.next = Node(23)
    head.next.next.next.next.next.next.next.next.next.next.next.next.next.next.next.next.next.next.next.next.next.next.next.next = Node(24)
    head.next.next.next.next.next.next.next.next.next.next.next.next.next.next.next.next.next.next.next.next.next.next.next.next.next = Node(25)
    head.next.next.next.next.next.next.next.next.next.next.next.next.next.next.next.next.next.next.next.next.next.next.next.next.next.next = Node(26)
    head.next.next.next.next.next.next.next.next.next.next.next.next.next.next.next.next.next.next.next.next.next.next.next.next.next.next.next.next.next = Node(27)
    head.next.next.next.next.next.next.next.next.next.next.next.next