import sys

class Node:
    def __init__(self, value):
        self.value = value
        self.left = None
        self.right = None

    def insert(self, value):
        if value < self.value:
            if self.left == None:
                self.left = Node(value)
            else:
                self.left.insert(value)
        else:
            if self.right == None:
                self.right = Node(value)
            else:
                self.right.insert(value)

    def printInOrder(self):
        if self.left!= None:
            self.left.printInOrder()
        print(self.value, end=' ')
        if self.right!= None:
            self.right.printInOrder()

    def printPreOrder(self):
        print(self.value, end=' ')
        if self.left!= None:
            self.left.printPreOrder()
        if self.right!= None:
            self.right.printPreOrder()

def main():
    m = int(sys.stdin.readline())
    tree = None
    for i in range(m):
        command = sys.stdin.readline().strip()
        if command == 'insert':
            value = int(sys.stdin.readline())
            if tree == None:
                tree = Node(value)
            else:
                tree.insert(value)
        else:
            if tree!= None:
                tree.printInOrder()
                print()
                tree.printPreOrder()
                print()

if __name__ == '__main__':
    main()