import sys


class Node:
    def __init__(self):
        self.value = None
        self.left = None
        self.right = None

    def insert(self, new_value):
        if new_value < self.value:
            if self.left is None:
                self.left = Node()
                self.left.value = new_value
            else:
                self.left.insert(new_value)
        else:
            if self.right is None:
                self.right = Node()
                self.right.value = new_value
            else:
                self.right.insert(new_value)

    def print_in_order(self):
        if self.left is not None:
            self.left.print_in_order()
        print(self.value, end=' ')
        if self.right is not None:
            self.right.print_in_order()

    def print_pre_order(self):
        print(self.value, end=' ')
        if self.left is not None:
            self.left.print_pre_order()
        if self.right is not None:
            self.right.print_pre_order()


if __name__ == '__main__':
    m = int(sys.stdin.readline())

    tree = None
    for i in range(m):
        command = sys.stdin.readline().strip()

        if command == 'insert':
            new_value = int(sys.stdin.readline())
            if tree is None:
                tree = Node()
                tree.value = new_value
            else:
                tree.insert(new_value)
        else:
            if tree is not None:
                tree.print_in_order()
                print()
                tree.print_pre_order()
                print()